#-------------------------------------------------
#
# Project created by QtCreator 2019-01-13T13:34:44
#
#-------------------------------------------------

QT       += core gui
QT       += serialport
QT       += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pro
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        src/mainwindow.cpp \
        src/rtu_para.cpp \
        src/rtu_facecheck.cpp \
        src/rtu_telerror.cpp \
        src/rtu_changecheck.cpp \
        src/rtu_fieldcheck.cpp \
        src/rtu_telvarmonitor.cpp \
        src/rtu_excelmanger.cpp \
        src/sys_para.cpp \
        src/sys_standardparasetting.cpp \
        src/sys_protocsetting.cpp \
        src/sys_userprotocsetting.cpp \
        src/sys_errorcheckmanager.cpp \
        src/sys_changecheckmanager.cpp \
        src/sys_timesync.cpp \
        src/uart_com.cpp \
        src/about_verion.cpp \
        src/xml_record.cpp

HEADERS += \
        inc/global.h \
        inc/mainwindow.h \
        inc/rtu_para.h \
        inc/rtu_facecheck.h \
        inc/rtu_telerror.h \
        inc/rtu_changecheck.h \
        inc/rtu_fieldcheck.h \
        inc/rtu_telvarmonitor.h \
        inc/rtu_excelmanger.h \
        inc/sys_para.h \
        inc/sys_standardparasetting.h \
        inc/sys_protocsetting.h \
        inc/sys_userprotocsetting.h \
        inc/sys_errorcheckmanager.h \
        inc/sys_changecheckmanager.h \
        inc/sys_timesync.h \
        inc/uart_com.h \
        inc/about_verion.h \
        inc/global.h \
        inc/xml_record.h

FORMS += \
        ui/mainwindow.ui \
        ui/rtu_para.ui \
        ui/rtu_facecheck.ui \
        ui/rtu_telerror.ui \
        ui/rtu_changecheck.ui \
        ui/rtu_fieldcheck.ui \
        ui/rtu_telvarmonitor.ui \
        ui/rtu_excelmanger.ui \
        ui/sys_para.ui \
        ui/sys_standardparasetting.ui \
        ui/sys_protocsetting.ui \
        ui/sys_userprotocsetting.ui \
        ui/sys_errorcheckmanager.ui \
        ui/sys_changecheckmanager.ui \
        ui/sys_timesync.ui \
        ui/uart_com.ui \
        ui/about_verion.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
