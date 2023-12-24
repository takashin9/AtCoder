#!/bin/sh
g++ ahc022_a.cpp

for file in `ls in/*.txt`
do
cargo run --release --bin tester ./a.out < $file > out.txt
done
