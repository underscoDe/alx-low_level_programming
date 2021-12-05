#!/bin/bash
wget -q --output-document=$HOME/lib101-makemewin.so https://github.com/B3zaleel/alx-low_level_programming/raw/main/0x18-dynamic_libraries/lib101-makemewin.so
export LD_PRELOAD=$HOME/lib101-makemewin.so
