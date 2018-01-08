#include "StatusLabel.h"

StatusLabel::StatusLabel(const QString& text, QWidget* parent)
    :   QLabel(parent)
        ,m_strText(text)
        ,m_lblStatus(this)
        ,m_enumStatus(SensorStatus::OK)
{
}

StatusLabel::~StatusLabel()
{
}

void
StatusLabel::setStatusText(const QString& text)
{
    // TODO
}

QString
StatusLabel::getStatusText()const
{
    return m_strText;
}

SensorStatus
StatusLabel::getSensorStatus()const
{
    return m_enumStatus;
}

void
StatusLabel::updateStatus(const SensorStatus status)
{
    // TODO
}

