#include "painter.h"

Painter::Painter()
{
    mpPicture = new QPicture();
    mpPainter = new QPainter(mpPicture);
}

Painter::~Painter()
{
    if(mpPainter != 0)
    {
        delete mpPainter;
        mpPainter = 0;
    }
    if(mpPicture != 0)
    {
        delete mpPicture;
        mpPicture = 0;
    }
}

void Painter::setPainterForGraph(QColor color)
{
    mpPainter->setPen(QPen(color,2,Qt::SolidLine,Qt::RoundCap));
}

void Painter::setPainterForStatusButton(Status eStatus)
{
    if(eStatus == Status::NOT_INITIALIZED)
    {
        mpPainter->setPen(QPen(Qt::gray, 20, Qt::SolidLine, Qt::RoundCap));
        return;
    }
    if(eStatus == Status::SUCCESS)
    {
        mpPainter->setPen(QPen(Qt::green, 20, Qt::SolidLine, Qt::RoundCap));
        return;
    }
    if(eStatus == Status::FAILED)
    {
        mpPainter->setPen(QPen(Qt::red, 20, Qt::SolidLine, Qt::RoundCap));
        return;
    }
}

QPicture Painter::drawLine(Punct *pPreviousPoint, Punct *pPoint)
{
    double x1,x2,y1,y2;
    x1 = pPreviousPoint->mX;
    y1 = pPreviousPoint->mY;
    x2 = pPoint->mX;
    y2 = pPoint->mY;

    qDebug() << "Drawing line from " << x1 * 100.0 + 250<< " "
             << y1 * 100.0 + 250 << " to " << x2 * 100.0 + 250<< " "
            << y2 * 100.0 + 250 ;

    this->resetPicture();
    if(pPreviousPoint->mOperatie == "S")
    {
        this->setPainterForGraph(Qt::blue);
    }
    else
    {
        this->setPainterForGraph(Qt::red);
    }
//    mpPainter->drawLine(x1 * 100.0 + 250,y1 * 100.0 + 250,x2 * 100.0 + 250,y2 * 100.0 + 250);
    mpPainter->drawLine(QLineF(200.0,150.0,50.0,100.0));
    mpPainter->drawEllipse(0,0,50,50);
    return *mpPicture;
}

QPicture Painter::drawStatusIcon(Status bStatus)
{
    this->resetPicture();
    this->setPainterForStatusButton(bStatus);
    mpPainter->drawEllipse(20, 20,20,20);
    return *mpPicture;
}

void Painter::endPaint()
{
    mpPainter->end();
}

void Painter::resetPicture()
{

}
