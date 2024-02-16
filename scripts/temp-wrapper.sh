#!/usr/bin/env bash
perl /src/dwmblocks-async/i3blocks-contrib/temperature/temperature --chip it8721-isa-0290
case $BLOCK_BUTTON in
  1) notify-send "$(sensors)" ;;
esac
