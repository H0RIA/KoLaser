#ifndef PAINTER_H
#define PAINTER_H

#include<QPicture>
#include<QPen>
#include<QPainter>
#include<QDebug>
#include"projectdata.h"
#include<QColor>
#include<QLabel>

enum Status
{
    NOT_INITIALIZED,
    SUCCESS,
    FAILED
};


class Painter
{
    QPicture *mpPicture;
    QPainter *mpPainter;

    void setPainterForGraph(QColor color);
    void setPainterForStatusButton(Status eStatus);
    void resetPicture();
public:
    Painter();
    ~Painter();

    QPicture drawLine(Punct*,Punct*);
    QPicture drawStatusIcon(Status bStatus);
    void endPaint();
};

#endif // PAINTER_H
