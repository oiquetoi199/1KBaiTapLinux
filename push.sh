#!/bin/bash

git add .
read note
echo -n "Them note cho commit : "
git commit -m "$note"
git push
