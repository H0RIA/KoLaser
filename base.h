#ifndef BASE_H
#define BASE_H

#define APPLICATION_NAME        "KoLaser"
#define COMPANY_NAME            "Kober"

#include <QApplication>
#include <QListWidget>
#include <QRadioButton>
#include <QSplashScreen>
#include <QSplitter>
#include <QProgressBar>
#include <QScrollBar>
#include <QProgressDialog>
#include <QMimeData>
#include <QWheelEvent>
#include <QSortFilterProxyModel>
#include <QSettings>
#include <QMenuBar>
#include <QMouseEvent>
#include <QScrollArea>
#include <QMainWindow>
#include <QFocusEvent>
#include <QShowEvent>
#include <QBitmap>
#include <QHeaderView>
#include <QPainter>
#include <QTextEdit>
#include <QFile>
#include <QIcon>
#include <QPixmap>
#include <QMessageBox>
#include <QDialog>
#include <QMenu>
#include <QContextMenuEvent>
#include <QAction>
#include <QDateTime>
#include <QTextStream>
#include <QMutex>
#include <QDebug>
#include <QWidget>
#include <QLabel>
#include <QList>
#include <QPushButton>
#include <QUuid>
#include <QThread>
#include <QCryptographicHash>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSystemTrayIcon>
#include <QGroupBox>
#include <QComboBox>
#include <QCheckBox>
#include <QDockWidget>
#include <QToolBar>
#include <QCloseEvent>
#include <QTableView>
#include <QTableWidget>
#include <QStyle>
#include <QAbstractTableModel>
#include <QVariant>
#include <QTabWidget>
#include <QStandardItemModel>
#include <QPair>
#include <QStyledItemDelegate>
#include <QFontMetrics>
#include <QDesktopWidget>
#include <QStackedWidget>
#include <QUndoStack>

#include <QFileDialog>
#include <QShortcut>
#include <QStringList>

#include <QDir>
#include <QMap>
#include <QFileInfo>
#include <QStandardPaths>
#include <QTimer>
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonObject>
#include <QJsonArray>
#include <QtCore/qmath.h>
#include <QUrl>
#include <QMovie>
#include <QLineEdit>
#include <QResizeEvent>

#include <QSqlDatabase>
#include <QSqlRecord>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlResult>
#include <QSqlDriver>
#include <QSqlField>
#include <QSqlQueryModel>

#include <sstream>

#ifndef STRINGIZE
#define STRINGIZE(s) (#s)
#endif // !STRINGIZE

#ifndef MEMBER_NAME
#define MEMBER_NAME(name)     m_##name
#endif // !MEMBER_NAME

#ifndef COLLECTION_MEMBER_NAME
#define COLLECTION_MEMBER_NAME(name)     m_##name##_list
#endif // !COLLECTION_MEMBER_NAME

#ifndef MEMBER_NAME_PTR
#define MEMBER_NAME_PTR(name)     m_p##name
#endif // !MEMBER_NAME_PTR

#ifndef SETTER_NAME
#define SETTER_NAME(name)     set##name
#endif // !SETTER_NAME

#ifndef GETTER_NAME
#define GETTER_NAME(name)     name
#endif // !GETTER_NAME

#ifndef DECLARE_PROPERTY
#define DECLARE_PROPERTY(type, name)    \
    public:\
    inline type GETTER_NAME(name)()const{return MEMBER_NAME(name);}\
    inline void SETTER_NAME(name)(const type& value){MEMBER_NAME(name) = value;}\
    protected:\
    type    MEMBER_NAME(name);\

#endif // !DECLARE_PROPERTY

#ifndef DECLARE_PROPERTY_PTR
#define DECLARE_PROPERTY_PTR(type, name)    \
    public:\
    inline type* GETTER_NAME(name)()const{return MEMBER_NAME_PTR(name);}\
    inline void SETTER_NAME(name)(type* value){MEMBER_NAME_PTR(name) = value;}\
    protected:\
    type*    MEMBER_NAME_PTR(name);\

#endif // !DECLARE_PROPERTY_PTR

#ifndef DECLARE_PROPERTY_GREF
#define DECLARE_PROPERTY_GREF(type, name)    \
    public:\
    inline const type& GETTER_NAME(name)()const{return MEMBER_NAME(name);}\
    inline type& GETTER_NAME(name)(){return MEMBER_NAME(name);}\
    inline void SETTER_NAME(name)(const type& value){MEMBER_NAME(name) = value;}\
    protected:\
    type    MEMBER_NAME(name);\

#endif // !DECLARE_PROPERTY_GREF

#ifndef DECLARE_PROPERTY_CB
#define DECLARE_PROPERTY_CB(type, name, callback)    \
    public:\
    inline const type& GETTER_NAME(name)()const{return MEMBER_NAME(name);}\
    inline type& GETTER_NAME(name)(){return MEMBER_NAME(name);}\
    inline void SETTER_NAME(name)(const type& value){\
        if(MEMBER_NAME(name) != value)\
        {\
            MEMBER_NAME(name) = value;\
            callback(STRINGIZE(name));\
        }\
    }\
    protected:\
    type    MEMBER_NAME(name);\

#endif // !DECLARE_PROPERTY_CB

#ifndef DECLARE_EQ_OPERATORS
#define DECLARE_EQ_OPERATORS(name)  \
    bool operator==(const name& value)const;\
    bool operator!=(const name& value)const;\

#endif // !DECLARE_EQ_OPERATORS

#ifndef DECLARE_ASSIGN_OPERATOR
#define DECLARE_ASSIGN_OPERATOR(name)  \
    name& operator=(const name& value);\

#endif // !DECLARE_ASSIGN_OPERATOR

#ifndef DECLARE_DEFAULT_CONSTRUCTOR
#define DECLARE_DEFAULT_CONSTRUCTOR(name)\
    name();\

#endif // !DECLARE_DEFAULT_CONSTRUCTOR

#ifndef DECLARE_COPY_CONSTRUCTOR
#define DECLARE_COPY_CONSTRUCTOR(name)\
    name(const name& obj);\

#endif // !DECLARE_COPY_CONSTRUCTOR

#ifndef DECLARE_DESTRUCTOR
#define DECLARE_DESTRUCTOR(name)\
    virtual ~name();\

#endif // !DECLARE_DESTRUCTOR

#ifndef DECLARE_DEF_METHODS
#define DECLARE_DEF_METHODS(name)\
    DECLARE_DEFAULT_CONSTRUCTOR(name)\
    DECLARE_COPY_CONSTRUCTOR(name)\
    DECLARE_DESTRUCTOR(name)\

#endif // !DECLARE_DEF_METHODS

#ifndef DECLARE_AS_SINGLETON
#define DECLARE_AS_SINGLETON(name)\
    Q_DISABLE_COPY(name)\
    public:\
        static name* instance();\
        virtual ~name();\
    private:\
        name();\
    private:\
        static name* m_pInstance;

#endif // !DECLARE_AS_SINGLETON

#ifndef DECLARE_SINGLETON_OBJECT_EX
#define DECLARE_SINGLETON_OBJECT_EX(type)   DECLARE_SINGLETON_OBJECT(type, type)
#endif // DECLARE_SINGLETON_OBJECT_EX

#ifndef DECLARE_SINGLETON_OBJECT
#define DECLARE_SINGLETON_OBJECT(type, name) \
    public:\
        inline type* create##type(){\
            type* data = new type();\
            if(data != nullptr){\
                MEMBER_NAME(name).append(data);\
            }\
            return data;\
        }\
        inline bool add##type(type* pData){\
            if(pData == nullptr)\
                return false;\
\
            if(MEMBER_NAME(name).contains(pData))\
                return true;\
            \
            MEMBER_NAME(name).append(pData);\
    \
            return true;\
        }\
        inline void clear##name(){\
            while(!MEMBER_NAME(name).isEmpty()){\
                type* data = MEMBER_NAME(name).front();\
                if(data != nullptr)\
                    delete data;\
                MEMBER_NAME(name).removeFirst();\
            }\
        }\
        inline void rem##type(type* object){\
            if(object == nullptr || MEMBER_NAME(name).isEmpty())\
                return;\
            MEMBER_NAME(name).removeAll(object);\
        }\
        inline void rem##type(const QUuid& objectId){\
            if(objectId.isNull())\
                return;\
            for(auto currentObject : MEMBER_NAME(name)){\
                if(currentObject != nullptr){\
                    if(currentObject->Id() == objectId){\
                        rem##type(currentObject);\
                        break;\
                    }\
                }\
            }\
        }\
        inline type* find##type(const QUuid& objectId){\
            type* result = nullptr;\
\
            if(objectId.isNull())\
                return result;\
\
            for(auto currentObject : MEMBER_NAME(name)){\
                if(currentObject != nullptr){\
                    if(currentObject->Id() == objectId){\
                        result = currentObject;\
                        break;\
                    }\
                }\
            }\
            return result;\
        }\
        inline QList<type*>& get##name(){\
            return MEMBER_NAME(name);\
        }\
        inline const QList<type*>& get##name()const{\
            return MEMBER_NAME(name);\
        }\
    protected:\
    QList<type*>    MEMBER_NAME(name);\

#endif // !DECLARE_SINGLETON_OBJECT

#ifndef INIT_SINGLETON
#define INIT_SINGLETON(name)    name* name::m_pInstance = nullptr
#endif // !INIT_SINGLETON

#ifndef IMPLEMENT_SINGLETON
#define IMPLEMENT_SINGLETON(name)\
    INIT_SINGLETON(name);\
    name* name::instance()\
    {\
        if(m_pInstance == nullptr){\
            m_pInstance = new name();\
        }\
        return m_pInstance;\
    }

#endif // !IMPLEMENT_SINGLETON

inline QByteArray loadFileContent(const QString& path)
{
    QByteArray buffer;

    if(path.isEmpty())
        return buffer;

    QFile file(path);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        buffer = file.readAll();
        file.close();
    }

    return buffer;
}

template<typename LayoutType>
LayoutType* createLayout()
{
    LayoutType* layout = nullptr;

    try{
        layout = new LayoutType();
    }catch(...){
        return nullptr;
    }

    QLayout* ptrLayout = dynamic_cast<QLayout*>(layout);
    if(ptrLayout != nullptr){
        ptrLayout->setContentsMargins(0, 0, 0, 0);
        ptrLayout->setSpacing(0);
    }

    return layout;
}

#ifndef SET_CSS_NAME
#define SET_CSS_NAME(object, name)\
    {\
    object.style()->unpolish(&object);\
    object.setObjectName(name);\
    object.style()->polish(&object);\
    object.repaint();\
    }
#endif // !SET_CSS_NAME

#ifndef INIT_MEMBER
#define INIT_MEMBER(name)   MEMBER_NAME_PTR(name)(nullptr)
#endif // INIT_MEMBER

#if defined(Q_OS_WIN32) || defined (Q_OS_WINRT)
    #include <windows.h>
#else
    typedef char* LPSTR;
    typedef const char* LPCSTR;
    typedef void* HMODULE;

    // "Bigly" deal: THIS DOES NOT WORK!
    //
    // The GetProcAddress method is WIN32 specific - added a blank implementation, with debug warning,
    // so that we can compile properly on other platforms;
    // If at some point, support for other platforms will be available, we'll have to revisit
    // dynamic module loading + function mapping.
    inline void* GetProcAddress(HMODULE hModule, LPCSTR funcName){
        Q_UNUSED(hModule)
        Q_UNUSED(funcName)

        qDebug() << "Not implemented on platforms other than Windows!";

        return nullptr;
    }
#endif

#endif // BASE_H
