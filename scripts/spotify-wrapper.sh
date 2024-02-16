#!/usr/bin/env bash
case $BLOCK_BUTTON in
        1) playerctl play-pause ;;
        5) playerctl previous ;;
        4) playerctl next ;;
esac
python3 /src/dwmblocks-async/i3blocks-contrib/spotifyd_dbus/spotifyd_dbus

