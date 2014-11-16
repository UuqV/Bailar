/*#ifndef SMART_SHUFFLE_H
#define SMART_SHUFFLE_H

#include <QDialog>
#include <phonon/audiooutput.h>
#include <phonon/seekslider.h>
#include <phonon/mediaobject.h>
#include <phonon/volumeslider.h>
#include <phonon/backendcapabilities.h>
#include <QList>

class QAction;
class QTableWidget;
class QLCDNumber;


namespace Ui {
class smart_shuffle;
}

class smart_shuffle : public QDialog
{
    Q_OBJECT

public:
    explicit smart_shuffle(QWidget *parent = 0);
    ~smart_shuffle();
    QSize sizeHint() const {
            return QSize(500, 300);
        }

private slots:
    void addFiles();
    void about();
    void stateChanged(Phonon::State newState, Phonon::State oldState);
    void tick(qint64 time);
    void sourceChanged(const Phonon::MediaSource &source);
    void metaStateChanged(Phonon::State newState, Phonon::State oldState);
    void aboutToFinish();
    void tableClicked(int row, int column);

private:
    Ui::smart_shuffle *ui;
    void setupActions();
    void setupMenus();
    void setupUi();

    Phonon::SeekSlider *seekSlider;
    Phonon::MediaObject *mediaObject;
    Phonon::MediaObject *metaInformationResolver;
    Phonon::AudioOutput *audioOutput;
    Phonon::VolumeSlider *volumeSlider;
    QList<Phonon::MediaSource> sources;

    QAction *playAction;
    QAction *pauseAction;
    QAction *stopAction;
    QAction *nextAction;
    QAction *previousAction;
    QAction *addFilesAction;
    QAction *exitAction;
    QAction *aboutAction;
    QAction *aboutQtAction;
    QLCDNumber *timeLcd;
    QTableWidget *musicTable;
};

#endif // SMART_SHUFFLE_H
*/
