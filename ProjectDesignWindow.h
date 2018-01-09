#ifndef PROJECTDESIGNWINDOW_H
#define PROJECTDESIGNWINDOW_H

#include "base.h"

class ProjectDesignWindow : public QLabel
{
    Q_OBJECT

    public:
        ProjectDesignWindow(QWidget* parent = nullptr);
        ~ProjectDesignWindow();

    protected:
        virtual void initialize();

    private:
};

#endif // PROJECTDESIGNWINDOW_H
