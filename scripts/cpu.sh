echo "^c#eba0ac^ $(top -bn1 | grep load | awk '{printf "%.2f%%\t\t\n", $(NF-2)}' | head -c-3)"
case $BLOCK_BUTTON in
    1) st -e btop ;;
esac
