@echo off
g++ -Isource/ -g -Og -std=c++17 -o bin/aoc source/%1.cpp && bin\aoc.exe