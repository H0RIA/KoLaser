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
    NOT_INITIALIZED,
    SUCCESS,
    FAILED
};


class Painter
{
    GraphLabel *mpGraphLabel;
public:
    Painter(QWidget *parent,ProjectData* pProjectData);
    ~Painter();
};

#endif // PAINTER_H
