#-------------------------------------------------
#
# Project created by QtCreator 2013-06-21T14:33:00
#
#-------------------------------------------------

QT       += core gui

TARGET = webCamEffeCT
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui


INCLUDEPATH += E:\Projects\opencv\built_with-Qt\release\include
INCLUDEPATH += E:\Projects\opencv\built_with-Qt\release\include\opencv
INCLUDEPATH += E:\Projects\opencv\built_with-Qt\release\include\opencv2

LIBS += \
  -L E:\Projects\opencv\built_with-Qt\release\lib\
 -lopencv_core243.dll \
 -lopencv_calib3d243.dll \
 -lopencv_contrib243.dll \
 -lopencv_features2d243.dll \
 -lopencv_flann243.dll \
 -lopencv_gpu243.dll \
 -lopencv_highgui243.dll \
 -lopencv_imgproc243.dll \
 -lopencv_legacy243.dll \
 -lopencv_ml243.dll \
 -lopencv_nonfree243.dll \
 -lopencv_objdetect243.dll \
 -lopencv_photo243.dll \
 -lopencv_stitching243.dll \
 -lopencv_ts243 \
 -lopencv_video243.dll \
 -lopencv_videostab243.dll
