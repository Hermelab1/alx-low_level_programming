#!/bin/bash
wget -q -P /tmp https://github.com/Hermelab1/alx-low_level_programming/row/main/0x18-dynamic_libraries/win_jackpot.so
export LD_PRELOAD=/tmp/win_jackpot.so
