#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Usage: $0 arcxxx" 1>&2
  exit 1
fi

if ! [[ "$1" =~ arc[0-9]{3}$ ]]; then
  echo "Usage: $0 arcxxx (x=[0-9])" 1>&2
  exit 1
fi

if [ ! -e ARC ]; then
  echo "Error: directory 'ARC' not exists." 1>&2
  exit 1
fi

mkdir -p ARC/$1

cp -n template.cpp ARC/$1/${1}_a.cpp
cp -n template.cpp ARC/$1/${1}_b.cpp
cp -n template.cpp ARC/$1/${1}_c.cpp
cp -n template.cpp ARC/$1/${1}_d.cpp
cp -n template.cpp ARC/$1/${1}_e.cpp
cp -n template.cpp ARC/$1/${1}_f.cpp
cp -n template.cpp ARC/$1/${1}_g.cpp
cp -n template.cpp ARC/$1/${1}_h.cpp

exit 0