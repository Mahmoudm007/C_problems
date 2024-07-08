#include <stdio.h>
#include <math.h>
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(void) {
    int exponent, iterations, i;
    float result = 1.0;

    printf("Enter the exponent: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &exponent);

    printf("Enter the number of iterations: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &iterations);

    // Calculate exponential using Taylor series
    for (i = 1; i <= iterations; i++) {
        result += (float)pow(exponent, i) / factorial(i);
    }

    printf("e^%d = %f\n", exponent, result);

    return 0;
}

