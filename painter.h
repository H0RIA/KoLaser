#ifndef PAINTER_H
#define PAINTER_H

#include<QPicture>
#include<QPen>
#include<QPainter>
#include<QDebug>
#include"projectdata.h"
#include<QColor>
#include<QLabel>

#include "graphlabel.h"

enum Status
{
    KOBER_STATUS_NOT_INITIALIZED,
    KOBER_STATUS_SUCCESS,
    KOBER_STATUS_FAILED
};

enum OutputColor
{
    KOBER_COLOR_ERROR = -1,
    KOBER_COLOR_SUCCESS = 0,
    KOBER_COLOR_REPORT = 1
};

class Painter
{
    GraphLabel *mpGraphLabel;
public:
    Painter(QWidget *parent,ProjectData* pProjectData);
    ~Painter();
};

#endif // PAINTER_H
