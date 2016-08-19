TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    set.cpp \
    match.cpp \
    player.cpp

HEADERS += \
    set.h \
    match.h \
    player.h

OTHER_FILES += \
    mainpage.dox

