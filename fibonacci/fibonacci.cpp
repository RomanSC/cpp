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
    int iter;
    for (unsigned int n = 0; n < 100; n++) {
        long unsigned x = fib(n);
        iter++;
        if (iter < 10) {
            printf("%ld  : %u\n", iter, x);
        }
        else {
            printf("%ld : %u\n", iter, x);
        }
    }

    return 0;
}
