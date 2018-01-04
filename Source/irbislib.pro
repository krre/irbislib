QT += core
QT += 3dcore 3drender 3dextras 3dinput
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
    IrbisLib/Core/Utils.h \
    IrbisLib/Graphics/Material/ShadelessMaterial.h

SOURCES += \
    IrbisLib/Core/Utils.cpp \
    IrbisLib/Graphics/Material/ShadelessMaterial.cpp

RESOURCES += \
    shaders.qrc
