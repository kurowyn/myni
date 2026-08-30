#include <stdio.h>

typedef struct IniEntry {
    char *section;
    char *key;
    char *value;
} IniEntry;

// Our pipeline is basically the following:
// - An .ini file 
// - Our parser, which generates an array of IniEntry.

int main(void) {
    puts("Hello world! (Not using printf, because it's just a single string argument.");
    return 0;
}
