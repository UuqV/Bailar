#ifndef bi_h_
#define bi_h_
#include <iostream>
#include <utility>
#include <cstdlib>
// #summon <satan.h>

template <class A, class B>
class Node {
	public:
		Node() : left_(NULL), right_(NULL),  parent_(NULL), link_(NULL) {}
		Node(const A& value) : value_(value), left_(NULL), right_(NULL), parent_(NULL), link_(NULL) {}
		A value_;
		Node<A, B>* parent_;
		Node<A, B>* left_;
		Node<A, B>* right_;
		Node<B, A>* link_;
};

template <class A, class B>
class Root {
	public:
		Root() : key_root(NULL), value_root(NULL) {}
		Node<A, B>* key_root;
		Node<B, A>* value_root;
};

template <class A, class B>
class tree_iterator {
	public:
		tree_iterator() : ptr_(NULL) {}
		tree_iterator(Node<A, B>* p) : ptr_(p) {}
		
		//const std::pair<A, B> operator*() const { return std::make_pair(ptr_->value_, ptr_->link_->value_); }
		
	  bool operator== (const tree_iterator& rgt) { return ptr_ == rgt.ptr_; }
	  bool operator!= (const tree_iterator& rgt) { return ptr_ != rgt.ptr_; }
		
		void operator++(int) {
			if (ptr_ -> right_ != NULL) {
				ptr_ = ptr_ -> right_;
				while (ptr_ -> left_ != NULL) {
					ptr_ = ptr_ -> left_;
				}
			}
			else if (ptr_ -> parent_ != NULL && ptr_ -> parent_ -> right_ != ptr_) {
				ptr_ = ptr_ -> parent_;
			}
			else {
				ptr_ = NULL;
			}
		}
		
		void operator--(int) {
			//std::cout << ptr_ -> value_ << "\n";
			if (ptr_ -> left_ != NULL) {
				ptr_ = ptr_ -> left_;
				while (ptr_ -> right_ != NULL) {
					ptr_ = ptr_ -> right_;
				}
			}
			else if (ptr_ -> parent_ != NULL && ptr_ -> parent_ -> left_ != ptr_) {
				ptr_ = ptr_ -> parent_;
			}
			else if (ptr_ -> parent_ != NULL) {
				ptr_ = ptr_ -> parent_ -> parent_;
			}
			else {
				ptr_ = NULL;
			}
		}
		
		Node<B, A>* follow_link() {
			return follow_link_helper(ptr_);
		}
		
	private:
		Node<A, B>* ptr_;
};

template <class A, class B>
class bidirectional_map {
	public:
		bidirectional_map() {
			root_ = new Root<A, B>();
			size_ = 0;
		}
		bidirectional_map(const bidirectional_map<A, B>& old) : size_(old.size_) {
			this -> root_ = new Root<A, B>;
			copy_tree(old.root_ -> key_root);
		}
		~bidirectional_map() {
			//std::cout << "Destroying keys\n";
			destroy(root_ -> key_root);
			//std::cout << "Destroying values\n";
			destroy(root_ -> value_root);
			delete root_;
		}
	  bidirectional_map& operator=(const bidirectional_map& old) {
	    if (&old != this) {
	      this -> destroy_tree(this -> key_root);
				this -> destroy_tree(this -> value_root);
	      copy_tree(old.root_ -> key_root);
	      this -> size_ = old.size_;
			}
			return *this;
	  }
		
		typedef tree_iterator<A, B> key_iterator;
		typedef tree_iterator<B, A> value_iterator;
		
		Node<B, A>* operator[](A key) {
			return find_helper(key, root_ -> key_root) -> link_;
		}
		
		Node<A, B>* operator[](B value) {
			return find_helper(value, root_ -> value_root) -> link_;
		}
		
		key_iterator find(const A& key) { return key_iterator(find_helper(key, root_ -> key_root) ); }
		value_iterator find(const B& value) { return value_iterator(find_helper(value, root_ -> value_root) ); }
		
	  std::pair<key_iterator,bool> insert(std::pair<A, B> pair) {
			return insert(pair.first, pair.second, root_ -> key_root, root_ -> value_root);
		}
		
		int erase(A element) {
			Node<A, B>* k = find_helper(element, root_ -> key_root);
			if (k != NULL) {
				erase_value(k -> link_);
				erase(k);
				return 1;
			}
			else {
				return 0;
			}
		}
		
		int size() const { return size_; }
		
	  void print(std::ostream& ostr) const { 
			print_helper(ostr, root_ -> value_root, 1);
			ostr << "root" << std::endl;
			print_helper(ostr, root_ -> key_root, 1);
		}
		
	  key_iterator key_begin() const { 
	    if (root_ -> key_root == NULL) return key_iterator(NULL);
	    Node<A, B>* p = root_ -> key_root;
	    while (p->left_) p = p->left_;
	    return key_iterator(p);
	  }
		
	  value_iterator value_begin() const { 
	    if (root_ -> value_root == NULL) return value_iterator(NULL);
	    Node<B, A>* p = root_ -> value_root;
	    while (p->left_) p = p->left_;
	    return value_iterator(p);
	  }
		
		value_iterator largest() {
	    if (root_ -> value_root == NULL) return value_iterator(NULL);
	    Node<B, A>* p = root_ -> value_root;
	    while (p->right_) p = p->right_;
	    return value_iterator(p);
		}
		
	  key_iterator key_end() const { return key_iterator(NULL); }
		value_iterator value_end() const { return value_iterator(NULL); }
		
	private:
		Root<A, B>* root_;
		int size_;
		
	  std::pair<key_iterator,bool> insert(const A& key, const B& value, Node<A, B>*& p, Node<B, A>*& q) {
			std::pair<key_iterator, bool> returnValue;
			
			if (!p) {
	      p = new Node<A, B>(key);
	      this->size_++;
				p -> link_ = insert_value(value, p, q).first;
	      returnValue = std::pair<key_iterator,bool>(key_iterator(p), true);
	    } 
	    else if (key < p->value_) {
	      returnValue = insert(key, value, p->left_, q);
				p -> left_ -> parent_ = p;
			}
	    else if (key > p->value_) {
	      returnValue = insert(key, value, p->right_, q);
				
				p -> right_ -> parent_ = p;
			}
	    else {
	      returnValue = std::pair<key_iterator,bool>(key_iterator(p), false);
			}
			return returnValue;
	  }
		
		std::pair<Node<B, A>*, bool> insert_value(const B& value, Node<A, B> *& p, Node<B, A> *& q) {
			std::pair<Node<B, A>* , bool> returnValue;
	    if (!q) {
	      q = new Node<B, A>(value);
				q -> link_ = p;
	      returnValue = std::pair<Node<B, A>*,bool>(q, true);
	    } 
	    else if (value < q->value_) {
	      returnValue = insert_value(value, p, q->left_);
				q -> left_ -> parent_ = q;
			}
	    else if (value > q->value_) {
	      returnValue = insert_value(value, p, q->right_);
				q -> right_ -> parent_ = q;
			}
	    else
	      returnValue = std::pair<Node<B, A>*,bool>(q, false);
			return returnValue;
		}
		
	  void erase(Node<A, B>* p) {
	    Node<A, B>* successor;
	    Node<A, B>* successor_parent;
			
	    if ( p -> left_ == NULL ) {
	      if ( p -> parent_ == NULL ) {
	        root_ -> key_root = p -> right_;
				}
	      else if ( p == p -> parent_ -> left_ )
	        p -> parent_ -> left_ = p -> right_;
	      else
	        p -> parent_ -> right_ = p -> right_;
	    }
	    else if ( p->right_ == NULL ) {
	      if ( p-> parent_ == NULL ) {
	        root_ -> key_root = p->left_;
				}
	      else if ( p == p -> parent_ -> left_ )
	        p -> parent_ -> left_ = p -> left_;
	      else
	        p -> parent_ -> right_ = p -> left_;
	    }
	    else {
	      successor = p -> right_;
	      successor_parent = p;
	      while ( successor -> left_ != NULL ) {
          successor_parent = successor;
	        successor = successor -> left_;
					successor -> parent_ = successor_parent;
	      }

	      if ( p -> parent_ == NULL ) {
	        root_ -> key_root = successor;
					root_ -> key_root -> parent_ = NULL;
				}
	      else if ( p == p -> parent_->left_ )
	        p -> parent_ -> left_ = successor;
	      else
	        p -> parent_ -> right_ = successor;
	      if ( successor == successor_parent -> left_ )
	        successor_parent -> left_ = successor -> right_;
	      else
	        successor_parent -> right_ = successor -> right_;
	        successor -> left_ = p -> left_;
	        successor -> right_ = p -> right_;
	    }
			delete p;
			
	    --size_;
	  }
		
		void erase_value(Node<B, A>* p) {
	    Node<B, A>* successor;
	    Node<B, A>* successor_parent;
			
	    if ( p -> left_ == NULL ) {
	      if ( p -> parent_ == NULL ) {
	        root_ -> value_root = p -> right_;
				}
	      else if ( p == p -> parent_ -> left_ )
	        p -> parent_ -> left_ = p -> right_;
	      else
	        p -> parent_ -> right_ = p -> right_;
	    }
	    else if ( p->right_ == NULL ) {
	      if ( p-> parent_ == NULL ) {
	        root_ -> value_root = p->left_;
				}
	      else if ( p == p -> parent_ -> left_ )
	        p -> parent_ -> left_ = p -> left_;
	      else
	        p -> parent_ -> right_ = p -> left_;
	    }
	    else {
	      successor = p -> right_;
	      successor_parent = p;
	      while ( successor -> left_ != NULL ) {
          successor_parent = successor;
	        successor = successor -> left_;
	      }

	      if ( p -> parent_ == NULL ) {
	        root_ -> value_root = successor;
					root_ -> value_root -> parent_ = NULL;
				}
	      else if ( p == p -> parent_->left_ )
	        p -> parent_ -> left_ = successor;
	      else
	        p -> parent_ -> right_ = successor;
	      if ( successor == successor_parent -> left_ )
	        successor_parent -> left_ = successor -> right_;
	      else
	        successor_parent -> right_ = successor -> right_;
	        successor -> left_ = p -> left_;
	        successor -> right_ = p -> right_;
	    }
			delete p;
			
		}
		
		void copy_tree(Node<A, B>* old) {
			insert(old -> value_, old -> link_ -> value_, root_ -> key_root, root_ -> value_root);
			if (old -> left_ != NULL) {
				copy_tree(old -> left_);
			}
			if (old -> right_ != NULL) {
				copy_tree(old -> right_);
			}
		}
};

template <class A, class B>
void destroy (Node<A, B>* p) {
	if (p == NULL) return;
	destroy(p -> left_);
	destroy(p -> right_);
	//std::cout << p -> value_ << "\n";
	delete p;
}

template <class A, class B>
Node<A, B>* follow_link_helper(Node<B, A>* node) {
	return node -> link_;
}

template <class A, class B>
Node<A, B>* find_helper(const A& keyorvalue, Node<A, B>* p) {
  if (!p) return NULL;
  if (p->value_ > keyorvalue)
    return find_helper(keyorvalue, p->left_);
  else if (p->value_ < keyorvalue)
    return find_helper(keyorvalue, p->right_);
  else
    return p;
}

template <class A, class B>
void print_helper(std::ostream& ostr, const Node<A, B>* p, int depth) {
  if (p) {
    print_helper(ostr, p->right_, depth+1);
    for (int i=0; i<depth; ++i) ostr << "    ";
    ostr << p->value_ << "\n";
    print_helper(ostr, p->left_, depth+1);
  }
}

#endif