#include "main.h"

/**
 * main- recursion
*/

int factorial(int n) {
    if (n== 1 || n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {
    int n;
    int result;
    n = 5;
    result = factorial(n);
    printf("Factorial of %d is %d!\n", n, result);
    return 0;
}
