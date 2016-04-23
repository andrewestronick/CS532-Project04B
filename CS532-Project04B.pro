TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    edge.cpp \
    mst.cpp \
    tree.cpp

HEADERS += \
    edge.h \
    mst.h \
    tree.h
