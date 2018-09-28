#ifndef PROJECTDATA_H
#define PROJECTDATA_H

#include<QString>
#include<QList>
#include<QDebug>

class Punct
{
public:
    Punct(QString qsOperation,double x, double y);
    QString mOperatie;
    double mX;
    double mY;

    void toString() { qDebug() << mOperatie << " " << mX << " " << mY; }
};

class Task
{
public:
    QString mOperationType;
    int mLaserPower;
    int mLaserSpeed;
    int mQFrequency;
    QList<Punct*>* mpPointList;
    int mGoal;
    int NrRRA;
    int NrRRD1;
    int NrRRD2;
    bool isDone;
public:
    Task(QString, int, int, int, QList<Punct*> *, int, int, int, int);
    ~Task();

    void toString();

    QList<Punct*> *getPointList();
};

class ProjectData
{
    QString mProjectName;
    QList<Task*>* mpTasksList;
    QList<Punct*>* mpPCBRute;

public:
    ProjectData();
    ~ProjectData();

    int mPCBLaserPower;
    int mPCBLaserSpeed;

    void setProjectName(QString sProjectName);
    QString getProjectName();

    QList<Task*>* getTaskList();
    QList<Punct*>* getPCBRute();
    void setPcbLaserPower(int nLaserPower);
    void setPcbLaserSpeed(int nLaserSpeed);

    void toString();
};
#endif // PROJECTDATA_H
