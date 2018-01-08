#ifndef SETTINGS_H
#define SETTINGS_H

#include "base.h"

enum class SavedValue : int
{
    AppWindowGeometry = 0,
    AppWindowsState
};

class Settings : public QObject
{
    DECLARE_AS_SINGLETON(Settings)

    const static QString AppWindowGeometry;     //  "AppWindowGeometry"
    const static QString AppWindowState;        //  "AppWindowState"

    public:
        QByteArray loadAppGeometry()const;
        void saveAppGeometry(const QByteArray& geometry);

    protected:
        virtual void initialize();

    private:
        QSettings m_LocalSettings;
};

#endif // SETTINGS_H
