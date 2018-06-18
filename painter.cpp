#include "painter.h"

Painter::Painter(QWidget *parent,ProjectData* pProjectData)
{
    mpGraphLabel = new GraphLabel(parent,pProjectData);
}

Painter::~Painter()
{
}
