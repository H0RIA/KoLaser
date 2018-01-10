#include "CentralWindow.h"

CentralWindow::CentralWindow(QWidget* parent)
    :   QLabel(parent)
        ,m_wndLaser(this)
        ,m_wndProject(this)
{
    initialize();
}

CentralWindow::~CentralWindow()
{}

void
CentralWindow::initialize()
{
    QHBoxLayout *layout = createLayout<QHBoxLayout>();
    layout->setContentsMargins(10, 10, 10, 10);

    layout->addWidget(&m_wndLaser, 1);
    layout->addWidget(&m_wndProject, 1);

    setLayout(layout);
}
