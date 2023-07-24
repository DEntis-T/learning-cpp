@echo off
title C++ Terminal
g++ --version
g++ -o "bin/main" "src/main.cpp"
echo $ Executing the code...
echo.
echo.
cd bin
main
echo.
echo.
pause