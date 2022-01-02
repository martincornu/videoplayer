#!/bin/bash

SRC="./$1.dist"
BIN="$SRC/$1"

# --plugin-enable=multiprocessing --plugin-enable=tk-inter --plugin-enable=numpy 
python3 -m nuitka --remove-output --plugin-enable=pylint-warnings --standalone $2 $1.py && mv $BIN $BIN.bin && chmod u+x $BIN.bin && cp -ru $SRC/* ../bin && rm -rf $SRC

 
