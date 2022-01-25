#!/bin/bash

echo -n "Nhap cau can tao : "
read filename
a="C"
c=".cpp"
touch "$a$filename$c"
code "$a$filename$c"
