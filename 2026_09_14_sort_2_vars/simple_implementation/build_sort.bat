@echo off
chcp 1251 > log
del log

set MAIN=main.cpp
set EXE=simple_sort_implementation.exe

if exist %EXE% del %EXE%

g++ -finput-charset=utf-8 -fexec-charset=windows-1251 %MAIN% -o %EXE%

%EXE%
