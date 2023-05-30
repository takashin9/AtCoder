#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Usage: $0 ahcxxx" 1>&2
  exit 1
fi

if ! [[ "$1" =~ AHC[0-9]{3}$ ]]; then
  echo "Usage: $0 ahcxxx (x=[0-9])" 1>&2
  exit 1
fi

if [ ! -e ahc ]; then
  echo "Error: directory 'ahc' not exists." 1>&2
  exit 1
fi

mkdir -p AHC/$1

cp -n template.cpp AHC/$1/source.cpp

exit 0