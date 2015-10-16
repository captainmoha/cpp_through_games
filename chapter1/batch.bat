@echo off
set file="avg_score"
g++ %file%.cpp -o %file%
%file%.exe
pause