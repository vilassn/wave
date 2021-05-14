#!/bin/bash

# First push all changes to mater and execute this script

git config credential.helper 'cache --timeout=600'

# locally checkout branch to be created
git checkout win
git checkout linux

# create linux branch
git checkout master
git branch -d linux
git checkout -b linux
git rm -r tools .gitignore wave.exe runtime/jre_win*
git commit -am "updated data"
git push origin --delete linux
git push -u origin linux

# create win branch
git checkout master
git branch -d win
git checkout -b win
git rm -r tools .gitignore wave.run runtime/jre_linux*
git commit -am "updated data"
git push origin --delete win
git push -u origin win

# checkout master branch back
git checkout master

# undo changes
#git reset
#git checkout .

# remove untracked files
#git clean -df