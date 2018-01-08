#include "Settings.h"

INIT_SINGLETON(Settings);

const QString Settings::AppWindowGeometry = "AppWindowGeometry";
const QString Settings::AppWindowState = "AppWindowState";

Settings::Settings()
    :   m_LocalSettings(COMPANY_NAME, APPLICATION_NAME)
{
    initialize();
}

Settings::~Settings(){}

Settings*
Settings::instance()
{
    if(m_pInstance == nullptr){
        m_pInstance = new Settings();
    }

    return m_pInstance;
}

void
Settings::initialize()
{
    // TODO
}

QByteArray
Settings::loadAppGeometry()const
{
    return m_LocalSettings.value(Settings::AppWindowGeometry).toByteArray();
}

void
Settings::saveAppGeometry(const QByteArray& geometry)
{
    m_LocalSettings.setValue(Settings::AppWindowGeometry, geometry);
}
