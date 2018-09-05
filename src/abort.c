/*
** File: src/abort.c
**
** Author: bringey
**
** Implementations for functions defined in include/abort.h
**
*/

#include <abort.h>
#include <err.h>
#include <console.h>

#include <stdbool.h>

static const char *EX_TABLE[] = {
    "A memory allocation failed",
    "Disk error",
    "Disk read error",
    "Disk label is invalid or corrupted",
    "Disk label is unsupported",
    "Could not find boot partition",
    "Filesystem error",
    "Filesystem is invalid or corrupted",
    "Could not mount filesystem",
    "Filesystem is unsupported",
    "Could not read file",
    "Path does not exist",
    "Config file does not exist",
    "Syntax error in config file"
};

#define EX_TABLE_SIZE (sizeof(EX_TABLE) / sizeof(const char *))

void except_(unsigned ex, int code, bool hasCode) {
    con_puts("Error occurred: ");
    const char *str;
    if (ex >= EX_TABLE_SIZE) {
        str = "unknown";
    } else {
        str = EX_TABLE[ex];
    }
    con_puts(str);
    if (hasCode) {
        con_printf(" (%d)\n", code);
    } else {
        con_putchar('\n');
    }

    _abort();
}
