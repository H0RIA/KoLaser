#include "StatusLabel.h"

StatusLabel::StatusLabel(const QString& text, QWidget* parent)
    :   QLabel(parent)
        ,m_strText(text)
        ,m_lblStatus(this)
        ,m_lblText(this)
        ,m_enumStatus(SensorStatus::OK)
{
    initialize();
}

StatusLabel::~StatusLabel(){}

void
StatusLabel::initialize()
{
    setObjectName("status_label");
    m_lblStatus.setObjectName("status_label_icon");

    updateStatus(m_enumStatus);
    setStatusText(m_strText);

    QHBoxLayout *layout = createLayout<QHBoxLayout>();
    layout->addWidget(&m_lblText);
    m_lblText.setAutoFillBackground(true);

    layout->addSpacing(5);
    layout->addWidget(&m_lblStatus);

    setLayout(layout);
}

void
StatusLabel::setStatusText(const QString& text)
{
    m_strText = text;
    m_lblText.setText(m_strText);
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
    m_enumStatus = status;

    switch(m_enumStatus)
    {
    case SensorStatus::Error:
        m_lblStatus.setPixmap(QPixmap(":/images/red-icon.png").scaled(m_lblStatus.size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
        break;
    case SensorStatus::OK:
        m_lblStatus.setPixmap(QPixmap(":/images/olive-green-icon.png").scaled(m_lblStatus.size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
        break;
    }
}

