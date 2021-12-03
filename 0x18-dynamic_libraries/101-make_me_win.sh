#!/bin/bash
wget -O /tmp/makemewin.so https://github.com/underscoDe/alx-low_level_programming/blob/master/0x18-dynamic_libraries/makemewin.so
export LD_PRELOAD=/tmp/makemewin.so gm