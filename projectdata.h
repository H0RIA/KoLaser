#ifndef PROJECTDATA_H
#define PROJECTDATA_H

#include<QString>
#include<QList>
#include<QDebug>

class Punct
{
public:
    Punct(QString,double , double);
    QString mOperatie;
    double mX;
    double mY;

    void toString() { qDebug() << mOperatie << " " << mX << " " << mY; }
};

class Task
{
public:
    QString mOperationType;
    int mPutereDioda;
    int mViteza;
    int mFrecventaQ;
    QList<Punct*> *mpPointList;
    int ValoareTinta;
    int NrRRA;
    int NrRRD1;
    int NrRRD2;
public:
    Task(QString, int, int, int, QList<Punct*> *, int, int, int, int);
    ~Task();

    void toString();

    QList<Punct*> *getPointList();
};

class ProjectData
{
    QString mProjectName;
    QList<Task*> *mpTasksList;

public:
    ProjectData();
    ~ProjectData();

    void setProjectName(QString sProjectName);
    QString getProjectName();

    QList<Task*>* getTaskList();

    void toString();
};
#endif // PROJECTDATA_H
