#include "config.h"
// #undef __OPTIMIZE__
#include "c-strcaseeq.h"
#include "streq.h"

volatile int x;

int main() {
    volatile char *encoding = "utf-8";
    for (int i = 0; i < 1e9; i++) {
        if (STRCASEEQ (encoding, "UTF-8", 'U', 'T', 'F', '-', '8', 0, 0, 0, 0)) {
            x = 1;
        }
    }
}
