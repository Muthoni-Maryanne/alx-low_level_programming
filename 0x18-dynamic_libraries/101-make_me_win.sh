#!/bin/bash
wget -P .. https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x18-dynamic_libraries/preload.so
export LD_PRELOAD="$PWD/../preload.so"
