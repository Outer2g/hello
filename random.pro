TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

LIBS += -lsfml-system -lsfml-graphics -lsfml-window -lsfml-audio

CONFIG += c++11
