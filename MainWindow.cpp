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
    m_pActionNew = new QAction(tr("&New"), this);
    m_pActionNew->setShortcuts(QKeySequence::New);
    m_pActionNew->setStatusTip(tr("Create a new file"));
    connect(m_pActionNew, &QAction::triggered, this, &MainWindow::onActionNew);

    m_pActionOpen = new QAction(tr("&Open..."), this);
    m_pActionOpen->setShortcuts(QKeySequence::Open);
    m_pActionOpen->setStatusTip(tr("Open a file..."));
    connect(m_pActionOpen, &QAction::triggered, this, &MainWindow::onActionOpen);

    m_pActionSave = new QAction(tr("&Save"), this);
    m_pActionSave->setShortcuts(QKeySequence::Save);
    m_pActionSave->setStatusTip(tr("Save project"));
    connect(m_pActionSave, &QAction::triggered, this, &MainWindow::onActionSave);

    connect(qApp, SIGNAL(aboutToQuit()), this, SLOT(onActionExit()));

    m_pActionHelp = new QAction(tr("&Help"), this);
    m_pActionHelp->setShortcuts(QKeySequence::HelpContents);
    m_pActionHelp->setStatusTip(tr("Help contents"));
    connect(m_pActionHelp, &QAction::triggered, this, &MainWindow::onActionHelp);
}

void
MainWindow::createMenus()
{
    m_pMenuFile = menuBar()->addMenu(tr("File"));
    m_pMenuFile->addAction(m_pActionNew);
    m_pMenuFile->addAction(m_pActionOpen);
    m_pMenuFile->addAction(m_pActionSave);
    m_pMenuFile->addSeparator();

    m_pMenuHelp = menuBar()->addMenu(tr("Help"));
    m_pMenuHelp->addAction(m_pActionHelp);
}

void
MainWindow::onActionNew()
{
}

void
MainWindow::onActionOpen()
{
}

void
MainWindow::onActionSave()
{
}

void
MainWindow::onActionExit()
{
}

void
MainWindow::onActionHelp()
{
}

void
MainWindow::onActionAbout()
{
}
