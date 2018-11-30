#!/bin/bash
CURRENT_DIR=`pwd`
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd $SCRIPT_DIR
cd ..
platformio run --target upload -e samd21macos
cd $CURRENT_DIR