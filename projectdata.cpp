#include "projectdata.h"

ProjectData::ProjectData()
{
    mpTasksList = 0;
}

ProjectData::~ProjectData()
{
    if (mpTasksList != 0)
    {
        delete mpTasksList;
        mpTasksList = 0;
    }
}

QList<Task *> *ProjectData::getTaskList()
{
    if (mpTasksList == 0)
    {
        mpTasksList = new QList<Task*>();
    }
    return mpTasksList;
}

void ProjectData::toString()
{
    qDebug() << mProjectName << " ";
    for(int i = 0; i < mpTasksList->count(); i++)
    {
        qDebug() << "Tasks: ";
        mpTasksList->at(i)->toString();
    }
}

void ProjectData::setProjectName(QString sProjectName)
{
    this->mProjectName = sProjectName;
}

QString ProjectData::getProjectName()
{
    return this->mProjectName;
}

Task::Task(QString op, int pd, int v,int f,QList<Punct*> *pList,int vt,int rra,int rrd1 = 0,int rrd2 = 0)
{
    mOperationType = op;
    mPutereDioda = pd;
    mViteza = v;
    mFrecventaQ = f;
    mpPointList = pList;
    ValoareTinta = vt;
    NrRRA = rra;
    NrRRD1 = rrd1;
    NrRRD2 = rrd2;
}
Task::~Task()
{
    if(mpPointList != 0)
    {
        delete mpPointList;
        mpPointList = 0;
    }
}

void Task::toString()
{
       qDebug() << mOperationType << " " << mPutereDioda  << " " << mViteza  << " " << mFrecventaQ << " " <<
                   ValoareTinta << " " << NrRRA << " " << NrRRD1 << " " << NrRRD2;
       for(int i = 0; i < mpPointList->count(); i++)
       {
           mpPointList->at(i)->toString();
       }
}

QList<Punct*>* Task::getPointList()
{
    if(mpPointList == 0)
    {
        mpPointList = new QList<Punct*>();
    }
    return mpPointList;

}
Punct::Punct(QString op, double pornire, double oprire)
{
    mOperatie = op;
    mX = pornire;
    mY = oprire;
}
