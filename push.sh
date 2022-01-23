#!/bin/bash

git add .
read note
git commit -m "$note"
git push
