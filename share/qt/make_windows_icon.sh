#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/tattoocoin.ico

convert ../../src/qt/res/icons/tattoocoin-16.png ../../src/qt/res/icons/tattoocoin-32.png ../../src/qt/res/icons/tattoocoin-48.png ${ICON_DST}
