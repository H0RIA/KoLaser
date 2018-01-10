#include "LaserStatusWindow.h"

LaserStatusWindow::LaserStatusWindow(QWidget* parent)
    :   QLabel(parent)
        ,m_lblPicoTest(tr("Pico test"), this)
        ,m_lblController(tr("Controller"), this)
        ,m_lblLaser(tr("Laser"), this)
        ,m_lblSensor(tr("Sensor"), this)
        ,m_lblHandPresent(tr("Hand"), this)
        ,m_btnStart(this)
{
    initialize();
}

LaserStatusWindow::~LaserStatusWindow()
{}

void
LaserStatusWindow::onPicoTestStatusChange(const SensorStatus status)
{
    m_lblPicoTest.updateStatus(status);

    updateGlobalStatus();
}

void
LaserStatusWindow::onControllerStatusChange(const SensorStatus status)
{
    m_lblController.updateStatus(status);

    updateGlobalStatus();
}

void
LaserStatusWindow::onLaserStatusChange(const SensorStatus status)
{
    m_lblLaser.updateStatus(status);

    updateGlobalStatus();
}

void
LaserStatusWindow::onSensorStatusChange(const SensorStatus status)
{
    m_lblSensor.updateStatus(status);

    updateGlobalStatus();
}

void
LaserStatusWindow::onHandPresentStatusChange(const SensorStatus status)
{
    m_lblHandPresent.updateStatus(status);

    updateGlobalStatus();
}

void
LaserStatusWindow::updateGlobalStatus()
{
    if(m_lblPicoTest.getSensorStatus() == SensorStatus::OK
        && m_lblController.getSensorStatus() == SensorStatus::OK
        && m_lblLaser.getSensorStatus() == SensorStatus::OK
        && m_lblSensor.getSensorStatus() == SensorStatus::OK
        && m_lblHandPresent.getSensorStatus() == SensorStatus::OK)
        m_btnStart.setObjectName("btnStart_OK");
    else
        m_btnStart.setObjectName("btnStart_NotOK");

    m_btnStart.style()->polish(&m_btnStart);
    m_btnStart.repaint();
}

void
LaserStatusWindow::initialize()
{
    m_btnStart.setText(tr("Start"));

    QVBoxLayout* layout = createLayout<QVBoxLayout>();
    layout->setSpacing(5);

    layout->addWidget(&m_lblPicoTest);
    layout->addWidget(&m_lblController);
    layout->addWidget(&m_lblLaser);
    layout->addWidget(&m_lblSensor);
    layout->addWidget(&m_lblHandPresent);
    layout->addStretch();
    layout->addWidget(&m_btnStart);

    setLayout(layout);

    onPicoTestStatusChange(SensorStatus::Error);
    onControllerStatusChange(SensorStatus::Error);
    onSensorStatusChange(SensorStatus::Error);
    onLaserStatusChange(SensorStatus::Error);
    onHandPresentStatusChange(SensorStatus::Error);
}
