#include <stdio.h>

int main() {
    int x, term = 1;
    double result = 1.0;
    int n, i;

    printf("Enter the value of x: ");
    fflush(stdin);
    fflush(stdout);

    scanf("%d", &x);

    printf("Enter the number of iterations: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        // cast x to double
        term *= (double)x / i; // Calculate the next term in the Taylor series
        result += term; // Add the term to the result to get the exponential result
    }

    printf("Exponential result: %lf\n", result);

    return 0;
}
