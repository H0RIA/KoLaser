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

    layout->addWidget(&m_wndLaser);
    layout->addWidget(&m_wndProject);

    setLayout(layout);
}
