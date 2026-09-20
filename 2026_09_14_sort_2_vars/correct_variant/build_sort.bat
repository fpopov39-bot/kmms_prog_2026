@echo off
chcp 1251 > log
del log

set CPP_FILES=io.cpp sortings.cpp main.cpp
set EXE=my_correct_sort.exe

if exist %EXE% del %EXE%

g++ -finput-charset=utf-8 -fexec-charset=windows-1251 %CPP_FILES% -o %EXE%

%EXE%
