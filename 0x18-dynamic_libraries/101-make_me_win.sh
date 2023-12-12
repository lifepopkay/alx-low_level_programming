#!/bin/bash
wget -p .. https://raw.githubusercontent.com/lifepopkay/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgm.so"
