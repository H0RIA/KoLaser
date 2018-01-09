#include "LaserStatusWindow.h"

LaserStatusWindow::LaserStatusWindow(QWidget* parent)
    :   QLabel(parent)
        ,m_lblPicoTest(tr("Pico test"), this)
        ,m_lblController(tr("Controller"), this)
        ,m_lblLaser(tr("Laser"), this)
        ,m_lblSensor(tr("Sensor"), this)
        ,m_lblHandPresent(tr("Hand"), this)
{
    initialize();
}

LaserStatusWindow::~LaserStatusWindow()
{}

void
LaserStatusWindow::initialize()
{
    QVBoxLayout* layout = createLayout<QVBoxLayout>();
    layout->setSpacing(5);

    layout->addWidget(&m_lblPicoTest);
    layout->addWidget(&m_lblController);
    layout->addWidget(&m_lblLaser);
    layout->addWidget(&m_lblSensor);
    layout->addWidget(&m_lblHandPresent);

    setLayout(layout);
}
