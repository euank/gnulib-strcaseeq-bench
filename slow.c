#include "config.h"
#include "c-strcaseeq.h"
#include "streq.h"

volatile int x;

int main() {
#ifdef ALREADY_UPPER
    volatile char *encoding = "UTF-8";
#else
    volatile char *encoding = "utf-8";
#endif
    for (int i = 0; i < 1e9; i++) {
        if (c_strcasecmp(encoding, "UTF-8") == 0) {
            x = 1;
        }
    }
}
