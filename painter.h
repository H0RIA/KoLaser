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
    KOBER_NOT_INITIALIZED,
    KOBER_SUCCESS,
    KOBER_FAILED
};

enum OutputColor
{
    KOBER_ERROR = -1,
    KOBER_SUCCES = 0,
    KOBER_REPORT = 1
};

class Painter
{
    GraphLabel *mpGraphLabel;
public:
    Painter(QWidget *parent,ProjectData* pProjectData);
    ~Painter();
};

#endif // PAINTER_H
