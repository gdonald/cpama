#!/usr/bin/env bash

for d in $(find . -type d -name p0\*); do
    cd $d
    pwd
    make clean
    make
    cd ../..
    echo
done
