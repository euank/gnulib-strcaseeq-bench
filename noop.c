
#include "config.h"
#include "c-strcaseeq.h"
#include "streq.h"

volatile int x;

int main() {
    for (int i = 0; i < 1e9; i++) {
        if (1) {
            x = 1;
        }
    }
}
