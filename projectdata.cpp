#include "projectdata.h"

ProjectData::ProjectData()
{
    mpTasksList = 0;
    mpPCBRute = 0;
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

QList<Punct*> *ProjectData::getPCBRute()
{
    if (mpPCBRute == 0)
    {
        mpPCBRute = new QList<Punct*>();
    }
    return mpPCBRute;
}

void ProjectData::toString()
{
    qDebug() << mProjectName << " " << mPCBLaserPower << " " << mPCBLaserSpeed << " ";
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

void ProjectData::setPcbLaserPower(int nLaserPower)
{
    mPCBLaserPower = nLaserPower;
}

void ProjectData::setPcbLaserSpeed(int nLaserSpeed)
{
    mPCBLaserSpeed = nLaserSpeed;
}

Task::Task(QString op, int pd, int v,int f,QList<Punct*> *pList,int vt,int rra,int rrd1 = 0,int rrd2 = 0)
{
    mOperationType = op;
    mLaserPower = pd;
    mLaserSpeed = v;
    mQFrequency = f;
    mpPointList = pList;
    mGoal = vt;
    NrRRA = rra;
    NrRRD1 = rrd1;
    NrRRD2 = rrd2;
    isDone = false;
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
       qDebug() << mOperationType << " " << mLaserPower  << " " << mLaserSpeed  << " " << mQFrequency << " " <<
                   mGoal << " " << NrRRA << " " << NrRRD1 << " " << NrRRD2;
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
Punct::Punct(QString qsOperation, double x, double y)
{
    mOperatie = qsOperation;
    mX = x;
    mY = y;
}
