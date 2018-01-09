#ifndef CENTRALWINDOW_H
#define CENTRALWINDOW_H

#include "LaserStatusWindow.h"
#include "ProjectDesignWindow.h"

class CentralWindow : public QLabel
{
    Q_OBJECT

    public:
        CentralWindow(QWidget* parent = nullptr);
        ~CentralWindow();

    protected:
        virtual void initialize();

    private:
        LaserStatusWindow   m_wndLaser;
        ProjectDesignWindow m_wndProject;
};

#endif // CENTRALWINDOW_H
