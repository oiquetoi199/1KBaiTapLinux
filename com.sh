#!/bin/bash

echo -n "Nhap so cau : "   
read file
a=".cpp"
b="C$file$a"

g++ $b -o test
