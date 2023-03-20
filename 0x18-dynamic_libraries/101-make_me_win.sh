#!/bin/bash
wget -q -P /tmp https://github.com/Hermelab1/alx-low_level_programming/blob/master/0x18-dynamic_libraries/win_jackpot.so
export LD_PRELOAD=/tmp/win_jackpot.so
