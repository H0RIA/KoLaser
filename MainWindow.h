#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTimer>

#include "projectdata.h"
#include "painter.h"
#include "scmodule.h"
#include "picomodule.h"
#include "controlboardmodule.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    ProjectData *mpProjectData;
    Painter *mpPainter;
    SCModule *mpScModule;
    PicoModule *mpPicoModule;
    ControlBoardModule *mpControlBoard;

    QTimer *mpPicoTimer;
    QTimer *mpCBTimer;
    QTimer *mpAlignTimer;
    QTimer* mpOptoInTimer;

    bool bIsAligning;
    bool mbStatusPico;
    bool mbStatusCb;

    int currentTaskIndex;

    QString readJson(QString jsonFilePath);
    int generateProjectData(QJsonDocument);
    int generateGraph();
    void validProjectLoaded(bool);
    void setStatusOnButton(QLabel *pLabel, Status bStatus);
    void printOutputToUser(QString qsMsg, OutputColor color);
    bool getOptoInValues();

private slots:
    void on_openFileBtn_released();
    void on_InitLaserBtn_released();
    void checkPicoHeartbeat();
    void checkCbHeartbeat();
    void on_saveSerialSettings_released();
    void on_btnLaserSettings_released();
    void on_startBtn_released();
    void on_stopBtn_released();
    void on_alignBtn_released();
    void on_align_done();
    void printOutputToUserSlot(QString qsMsg, OutputColor color);
    void reportCbStatusSlot(bool isCbAlive);
    void checkOptoInStatusSlot();
    void abandonSequence();
    void invalidTaskSlot(long logValue);
    void beginMarking();
};

#endif // MAINWINDOW_H
