#!/usr/bin/env bash

for d in $(find . -type f -name 'Makefile' | sed -r 's|/[^/]+$||' | sort); do
    cd $d
    pwd
    make clean
    make
    cd ../..
    echo
done
