#include "MainWindow.h"
#include "Settings.h"

MainWindow::MainWindow(QWidget *parent)
    :   QMainWindow(parent)
        ,INIT_MEMBER(MenuFile)
        ,INIT_MEMBER(MenuHelp)
        ,INIT_MEMBER(ActionNew)
        ,INIT_MEMBER(ActionOpen)
        ,INIT_MEMBER(ActionSave)
        ,INIT_MEMBER(ActionExit)
        ,INIT_MEMBER(ActionHelp)
        ,INIT_MEMBER(ActionAbout)
{
    initialize();
}

MainWindow::~MainWindow()
{

}

void
MainWindow::initialize()
{
    QWidget* widget = new QWidget();
    setCentralWidget(widget);


    createActions();
    createMenus();

    setWindowTitle(APPLICATION_NAME);
    setMinimumSize(240, 240);
    restoreGeometry(Settings::instance()->loadAppGeometry());
    // TODO
}

void
MainWindow::closeEvent(QCloseEvent * event)
{
    Q_UNUSED(event)

    Settings::instance()->saveAppGeometry(saveGeometry());
}

#ifndef QT_NO_CONTEXTMENU
void
MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    // TODO: implement
}
#endif // QT_NO_CONTEXTMENU

void
MainWindow::createActions()
{
}

void
MainWindow::createMenus()
{
}
