#!/bin/bash
gcc -shared -fPIC makemewin.c -o makemewin.so -ldl
export LD_PRELOAD=/home/vagrant/alx-low_level_programming/0x18-dynamic_libraries/makemewin.so ldd gm