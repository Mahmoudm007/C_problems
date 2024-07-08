#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, space;

    printf("Enter the size of the diamond: ");
    scanf("%d", &n);
    printf("\n");
    if (n % 2 == 0) {
        printf("Please enter an odd number for the size of the diamond.\n");
        return 1;
    }

    space = n / 2;

    // Upper half of the diamond
    for (i = 0; i < n / 2 + 1; i++) {
        for (j = 0; j < space; j++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
        space--;
    }

    // Lower half of the diamond
    space = 1;
    for (i = n / 2 - 1; i >= 0; i--) {
        for (j = 0; j < space; j++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
        space++;
    }

    return 0;
}
