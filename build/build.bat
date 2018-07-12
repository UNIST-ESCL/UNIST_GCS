@echo off
echo Setting up environment for Qt usage...
set PATH=C:\Qt\5.9.3\msvc2015\bin;%PATH%
cd /D D:\UAV\GCS\qgroundcontrol-Qt5.9.3\build
qmake ..\qgroundcontrol.pro
qmake -tp vc ..\qgroundcontrol.pro
