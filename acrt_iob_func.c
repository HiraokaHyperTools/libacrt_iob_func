#include <stdio.h>

FILE *__acrt_iob_func(int handle) {
    switch (handle) {
        case 0: return stdin;
        case 1: return stdout;
        case 2: return stderr;
    }
    return NULL;
}
