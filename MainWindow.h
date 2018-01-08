#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "base.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

    DECLARE_PROPERTY_PTR(QMenu, MenuFile)
    DECLARE_PROPERTY_PTR(QMenu, MenuHelp)

    DECLARE_PROPERTY_PTR(QAction, ActionNew)
    DECLARE_PROPERTY_PTR(QAction, ActionOpen)
    DECLARE_PROPERTY_PTR(QAction, ActionSave)
    DECLARE_PROPERTY_PTR(QAction, ActionExit)

    DECLARE_PROPERTY_PTR(QAction, ActionHelp)
    DECLARE_PROPERTY_PTR(QAction, ActionAbout)

    DECLARE_PROPERTY_PTR(QLabel, LabelInfo)

    public:
        MainWindow(QWidget *parent = 0);
        ~MainWindow();

    protected:
        void initialize();
        void closeEvent(QCloseEvent * event)override;

#ifndef QT_NO_CONTEXTMENU
        void contextMenuEvent(QContextMenuEvent *event) override;
#endif // QT_NO_CONTEXTMENU

    private:
        void createActions();
        void createMenus();

    private slots:
        void onActionNew();
        void onActionOpen();
        void onActionSave();
        void onActionExit();
        void onActionHelp();
        void onActionAbout();
};

#endif // MAINWINDOW_H
