#include <stdio.h>

int main(void){
    int n = 0;
    printf("Enter the number of rows: ");

    fflush(stdin); // Flush input buffer
    fflush(stdout); // Flush output buffer

    scanf("%d",&n);
    int row = 0;

    for(row = 0; row < 2 * n; row++){
        int totalColNumber = row > n ? 2 * n - row : row;

        int noOfSpaces = n - totalColNumber;

        for(int space = 0; space < noOfSpaces; space++){
            printf(" ");
        }
        for(int col = 0; col < totalColNumber; col++){
            printf("* ");
        }
        printf("\n");
    }

}
