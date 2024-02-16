#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER ""

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 10000

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 1

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(cmd, interval, signal).
#define BLOCKS(X)         \
    X("sh /src/dwmblocks-async/i3blocks-contrib/calendar/calendar", 1, 1) \
    X("sh /src/dwmblocks-async/i3blocks-contrib/bandwidth/bandwidth", 1, 2) \
    X("sh /src/dwmblocks-async/scripts/cpu.sh", 1, 3) \
    X("sh /src/dwmblocks-async/scripts/temp-wrapper.sh", 1, 4) \
    X("sh /src/dwmblocks-async/scripts/ram.sh", 1, 5) \
    X("sh /src/dwmblocks-async/scripts/spotify-wrapper.sh", 1, 6) \
    X("sh /src/dwmblocks-async/i3blocks-contrib/volume/volume", 1, 7)
#endif  // CONFIG_H
