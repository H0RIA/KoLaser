#ifndef LASERSTATUSWINDOW_H
#define LASERSTATUSWINDOW_H

#include "StatusLabel.h"

class LaserStatusWindow : public QLabel
{
    Q_OBJECT

    public:
        LaserStatusWindow(QWidget* parent = nullptr);
        ~LaserStatusWindow();

    public slots:
        void onPicoTestStatusChange(const SensorStatus status = SensorStatus::OK);
        void onControllerStatusChange(const SensorStatus status = SensorStatus::OK);
        void onLaserStatusChange(const SensorStatus status = SensorStatus::OK);
        void onSensorStatusChange(const SensorStatus status = SensorStatus::OK);
        void onHandPresentStatusChange(const SensorStatus status = SensorStatus::OK);

        void updateGlobalStatus();

    protected:
        virtual void initialize();

    private:
        StatusLabel m_lblPicoTest;
        StatusLabel m_lblController;
        StatusLabel m_lblLaser;
        StatusLabel m_lblSensor;
        StatusLabel m_lblHandPresent;
        QPushButton m_btnStart;
};

#endif // LASERSTATUSWINDOW_H
