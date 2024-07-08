#include <stdio.h>

// Function to print a number in binary format
void printBinary(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        if ((num >> i) & 1)
            printf("1");
        else
            printf("0");
    }
}

// Function to perform right rotation on an 8-bit number x by n bits
unsigned char rotate_right(unsigned char x, int n) {
    return (x >> n) | (x << (8 - n));  // Right shift by n bits and OR with left shift by (8 - n) bits
}

// Function to perform left rotation on an 8-bit number x by n bits
unsigned char rotate_left(unsigned char x, int n) {
    return (x << n) | (x >> (8 - n));  // Left shift by n bits and OR with right shift by (8 - n) bits
}

int main(void) {
    unsigned char x = 0;
    int n = 0;  //variable n to store the number of rotate cycles
    char o = '0';  // character variable o to store the rotation direction ('r' or 'l')

    // Ask the user to enter an 8-bit number (0-255) in decimal
    printf("Enter an 8-bit number: ");
    scanf("%d", &x);

    // Check if the input number is within the valid range
    if (x < 0 || x > 255) {
        printf("Invalid input. Please enter a number between 0 and 255.\n");
        return 1;
    }

    // Ask the user to enter the n3umber of rotate cycles
    printf("Enter the number of rotate cycles: ");
    scanf("%d", &n);

    // Ask the user to enter the rotation direction ('r' for right or 'l' for left)
    printf("Enter 'r' for rotate right or 'l' for rotate left: ");
    scanf(" %c", &o);

    // Make the rotation
    if (o == 'r') {
        unsigned char rotated = rotate_right(x, n);
        printf("x in binary: ");
        printBinary(x);  // Print original number in binary
        printf("\nShifted x in binary:  ");
        printBinary(rotated);  // Print shifted number in binary
        printf("\n");
    }

    else if (o == 'l') {
        unsigned char rotated = rotate_left(x, n);

        printf("Original number in binary: ");

        printBinary(x);  // Print original number in binary
        printf("\nShifted number in binary:  ");

        printBinary(rotated);  // Print shifted number in binary
        printf("\n");

    }

    else {
        printf("Invalid option. Please enter 'r' or 'l'.\n");
        return 1;
    }
    return 0;
}
