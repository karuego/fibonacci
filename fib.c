#include "stdio.h"
#include "stdint.h"
#include "stdbool.h"
#include "inttypes.h"

uint64_t fib(int n) {
    if (n <= 1) return n;

    uint64_t a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    uint64_t a = fib(1000);
    printf("%" PRIu64 "\n", a);
}
