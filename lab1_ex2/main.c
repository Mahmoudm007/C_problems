/*
 * main.c
 */


#include <stdio.h>

int main() {

    unsigned int num1, num2, num3;

    printf("Enter three different integers: ");

    fflush(stdin); // Flush input buffer
    fflush(stdout); // Flush output buffer

    scanf("%d %d %d", &num1, &num2, &num3);
    // Calculate the sum of the three integers
    unsigned int sum_result = num1 + num2 + num3;

    // Calculate the average of the three integers (cast sum_result to float for floating point division)
    float average_result = (float)sum_result / 3.0;

    // Calculate the product of the three integers
    unsigned int product_result = num1 * num2 * num3;

    // Determine the smallest of the three integers using trinary operator
    unsigned int smallest_result = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);

    // Determine the largest of the three integers using conditional operator
    unsigned int largest_result = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);


    printf("Sum is %d\n", sum_result);
    printf("Average is %.2f\n", average_result);
    printf("Product is %d\n", product_result);
    printf("Smallest is %d\n", smallest_result);
    printf("Largest is %d\n", largest_result);

    return 0;
}
