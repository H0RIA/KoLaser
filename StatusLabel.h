#ifndef STATUSLABEL_H
#define STATUSLABEL_H

#include "base.h"

// We may add more statuses...
enum class SensorStatus : int{
    OK,
    Error
};

class StatusLabel : public QLabel
{
    Q_OBJECT

    public:
        StatusLabel(const QString& text = QString(""), QWidget* parent = nullptr);
        ~StatusLabel();

        void setStatusText(const QString& text);
        QString getStatusText()const;

        SensorStatus getSensorStatus()const;

    public slots:
        void updateStatus(const SensorStatus status);

    protected:

    private:
        QString         m_strText;
        QLabel          m_lblStatus;
        SensorStatus    m_enumStatus;
};

#endif // STATUSLABEL_H
