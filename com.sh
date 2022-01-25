#!/bin/bash

echo -n "Nhap so cau : "   
read file
a=".cpp"
b="$file$a"

g++ $b -o test
