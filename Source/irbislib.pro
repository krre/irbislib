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
    Irbis/Core/Singleton.h
