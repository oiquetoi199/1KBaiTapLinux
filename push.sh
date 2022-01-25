#!/bin/bash

git add .
echo -n "Them note cho commit : "
read note
git commit -m "$note"
git push
