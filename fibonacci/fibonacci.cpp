#include<stdio.h>

long unsigned int fib(long unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    for (unsigned int n = 0; n < 100; n++) {
        long unsigned x = fib(n);
        if (n < 10) {
            printf("%ld  : %u\n", n, x);
        }
        else {
            printf("%ld : %u\n", n, x);
        }
    }

    return 0;
}
