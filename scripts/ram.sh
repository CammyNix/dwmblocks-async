echo "^c#a6e3a1^ $(free -h | awk '/^Mem: /{ print $3 }')"
case $BLOCK_BUTTON in
    1) st -e btop ;;
esac
