#ifndef BASE_H
#define BASE_H

#include <QString>
#include <QDebug>

#if defined(Q_OS_WIN32)
    #include <windows.h>
#else
    typedef char* LPSTR;
    typedef const char* LPCSTR;
    typedef void* HMODULE;

    inline void* GetProcAddress(HMODULE hModule, LPCSTR funcName){
        Q_UNUSED(hModule)
        Q_UNUSED(funcName)

        qDebug() << "Not implemented on platforms other than Windows!";

        return nullptr;
    }
#endif

#endif // BASE_H
