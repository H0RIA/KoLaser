#ifndef LASERSTATUSWINDOW_H
#define LASERSTATUSWINDOW_H

#include "StatusLabel.h"

class LaserStatusWindow : public QLabel
{
    Q_OBJECT

    public:
        LaserStatusWindow(QWidget* parent = nullptr);
        ~LaserStatusWindow();

    protected:
        virtual void initialize();

    private:
        StatusLabel  m_lblPicoTest;
        StatusLabel  m_lblController;
        StatusLabel  m_lblLaser;
        StatusLabel  m_lblSensor;
        StatusLabel  m_lblHandPresent;
};

#endif // LASERSTATUSWINDOW_H
