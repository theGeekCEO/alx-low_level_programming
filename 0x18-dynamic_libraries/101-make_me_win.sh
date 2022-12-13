#!/bin/bash
wget -P /tmp/ https://github.com/iyidaclem/alx-low_level_programming/blob/master/0x18-dynamic_libraries/nrandom.sddo
export LD_PRELOAD=/tmp/nrandom.so
