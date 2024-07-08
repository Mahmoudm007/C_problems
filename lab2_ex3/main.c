#include <stdio.h>

int main() {
    int num_terms, first = 0, second = 1, next, i;

    printf("Enter the number of Fibonacci terms: ");

    fflush(stdin);
    fflush(stdout);


    scanf("%d", &num_terms);

    printf("Fibonacci Series:\n");

    // Printing first two terms
    printf("%d, %d", first, second);

    for (i = 3; i <= num_terms; i++) { // Start the loop from the third term because the first = 0, second = 1
        next = first + second; // Calculate the next term by adding the previous two terms
        printf(", %d", next);
        first = second; // Update the first term to the value of the second term
        second = next; // Update the second term to the value of the next term
    }

    printf("\n");

    return 0;
}
