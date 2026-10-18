@echo off
chcp 65001 >nul

:: Компилируем программу в UTF-8
g++ -finput-charset=utf-8 -fexec-charset=utf-8 main.cpp menu_functions.cpp -o main.exe
:: Запускаем
main.exe
pause