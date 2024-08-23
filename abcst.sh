#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Usage: $0 abcxxx" 1>&2
  exit 1
fi

if ! [[ "$1" =~ abc[0-9]{3}$ ]]; then
  echo "Usage: $0 abcxxx (x=[0-9])" 1>&2
  exit 1
fi

if [ ! -e ABC ]; then
  echo "Error: directory 'ABC' not exists." 1>&2
  exit 1
fi

mkdir -p ABC/$1

cp -n template.cpp ABC/$1/${1}_a.cpp
cp -n template.cpp ABC/$1/${1}_b.cpp
cp -n template.cpp ABC/$1/${1}_c.cpp
cp -n template.cpp ABC/$1/${1}_d.cpp
cp -n template.cpp ABC/$1/${1}_e.cpp
cp -n template.cpp ABC/$1/${1}_f.cpp
cp -n template.cpp ABC/$1/${1}_g.cpp
cp -n template.cpp ABC/$1/${1}_h.cpp

exit 0