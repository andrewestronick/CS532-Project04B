TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    edge.cpp \
    graph.cpp \
    mst.cpp

HEADERS += \
    edge.h \
    graph.h \
    mst.h
