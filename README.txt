Bailar is a machine learning program for music.

Every time a note is played, Bailar stores information about what is was played next to,
and, as it accumulates data, will give you a suggestion for what to play next. It also predicts
three "simultaneous" notes when in "chord mode." When one note is played, the algorithm will
predict the most likely two notes to be played with it.

The program automatically stores the user's accumulated data for chords and next note predictions
in text files with the extension "pstd." The program includes functionality to upload this data
to a server using curl in OS X and Linux, so that the prediction data can be based off of the
cumulative actions of all users, rather than just one.