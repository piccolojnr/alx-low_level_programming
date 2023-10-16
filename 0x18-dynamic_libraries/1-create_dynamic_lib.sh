#!/bin/bash

for src_file in *.c; do
    obj_name=$(basename $src_file .c).o
    gcc -c -fPIC $src_file -o $obj_name
done

gcc -shared -o liball.so *.o
