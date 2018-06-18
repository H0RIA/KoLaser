#ifndef GRAPHLABEL_H
#define GRAPHLABEL_H

#include<QLabel>
#include<QPainter>
#include<QHBoxLayout>
#include "projectdata.h"

class GraphLabel : public QLabel
{
    ProjectData* mpProjectData;

    double translatePoint(double nPoint)
    {
        return nPoint * 4 + 200;
    }
public:
    GraphLabel(QWidget *parent, ProjectData* pProjectData){

        QWidget::setParent(parent);
        mpProjectData = pProjectData;

        setMinimumSize(QSize(400, 400));
        setMaximumSize(QSize(400, 400));
        setStyleSheet(QString("border: 3px solid rgb(0, 0, 0)"));

    }
protected:
    void paintEvent(QPaintEvent *e)
    {
        (e);
        QPainter paint(this);
        QList<Punct*>* pPcbRute = mpProjectData->getPCBRute();
        for(int i = 1; i < pPcbRute->count() - 1; i++)
        {
            QPen pointPen(Qt::black);
            pointPen.setWidth(3);
            paint.setPen(pointPen);
            paint.drawPoint(translatePoint(pPcbRute->at(i-1)->mX),translatePoint(pPcbRute->at(i-1)->mY));

            QPen linePen(Qt::yellow);
            paint.setPen(linePen);
            paint.drawLine(translatePoint(pPcbRute->at(i-1)->mX),translatePoint(pPcbRute->at(i-1)->mY),
                           translatePoint(pPcbRute->at(i)->mX),translatePoint(pPcbRute->at(i)->mY));
        }

        QPainter realPointPainter(this);
        QPen laserPen(Qt::red);
        realPointPainter.setPen(laserPen);
        QList<Task*>* pTaskList = mpProjectData->getTaskList();
        for(int i = 0; i < pTaskList->count(); i++)
        {
            QList<Punct*>* pPointList = pTaskList->at(i)->getPointList();
            for(int j = 1; j < pPointList->count() - 1; j++)
            {
                if(pPointList->at(j)->mOperatie == "A")
                realPointPainter.drawLine(translatePoint(pPointList->at(j-1)->mX),
                                          translatePoint(pPointList->at(j-1)->mY),
                                          translatePoint(pPointList->at(j)->mX),
                                          translatePoint(pPointList->at(j)->mY));
            }
        }

    }

};
#endif // GRAPHLABEL_H
