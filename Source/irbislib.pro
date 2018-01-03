QT += core
QT -= gui

CONFIG += c++11
TARGET = irbis
TEMPLATE = lib
DESTDIR = $$(IRBIS_HOME)/build

DISTFILES += \
    ../README.md \
    ../.gitignore

HEADERS += \
    IrbisLib/Core/Singleton.h \
    IrbisLib/Core/Utils.h

SOURCES += \
    IrbisLib/Core/Utils.cpp
