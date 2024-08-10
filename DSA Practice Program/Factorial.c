#include <stdio.h>

int main() {
    int n = 154;
    long double fac = 1;

    // Calculate factorial
    for (int i = n; i > 1; i--) {
        fac *= i;
    }

    // Print the result
    printf("%Lf\n", fac);

    return 0;
}
