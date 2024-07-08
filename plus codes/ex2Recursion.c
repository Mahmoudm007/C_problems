#include <stdio.h>

void printSpaces(int n) {
    if (n <= 0)
        return;
    printf(" ");
    printSpaces(n - 1);
}

void printStars(int n) {
    if (n <= 0)
        return;
    printf("* ");
    printStars(n - 1);
}

void printLine(int spaces, int stars) {
    if (spaces < 0 || stars <= 0)
        return;
    printSpaces(spaces);
    printStars(stars);
    printf("\n");
    printLine(spaces - 1, stars + 2);
}

void printUpperDiamond(int size) {
    if (size <= 0 || size % 2 == 0) {
        printf("Please provide an odd positive number.\n");
        return;
    }
    int spaces = size / 2;
    int stars = 1;
    printLine(spaces, stars);
}

void printLowerDiamond(int spaces, int stars) {
    if (spaces <= 0 || stars <= 0)
        return;
    printSpaces(spaces);
    printStars(stars);
    printf("\n");
    printLowerDiamond(spaces + 1, stars - 2);
}

void printDiamond(int size) {
    printUpperDiamond(size);
    printLowerDiamond(1, size - 2);
}

int main() {
    int size;
    printf("Enter the size of the diamond (odd number): ");
    scanf("%d", &size);
    printDiamond(size);
    return 0;
}
