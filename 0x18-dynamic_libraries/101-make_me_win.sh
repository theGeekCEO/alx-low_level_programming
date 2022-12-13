#!/bin/bash
wget -P /tmp/ https://github.com/theGeekCEO/alx-low_level_programming/master/0x18-dynamic_libraries/nrandom.sddo
export LD_PRELOAD=/tmp/nrandom.so
