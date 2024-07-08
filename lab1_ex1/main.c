/*
 * main.c
 * ex1 lab 1
 */

#include <stdio.h>



int main(){
    // Variables initialized by 0, if uninitialized will be garage value
    unsigned int u = 0;
    unsigned int a = 0;
    unsigned int t = 0;
    unsigned int v = 0;
    unsigned int s = 0;

    printf("Enter the initial velocity :");
    fflush(stdin); // Flush input buffer
    fflush(stdout); // Flush output buffer
    scanf("%i",&u);

    printf("Enter the acceleration :");
    fflush(stdin); // Flush input buffer
    fflush(stdout); // Flush output buffer
    scanf("%i",&a);

    printf("Enter the time :");
    fflush(stdin); // Flush input buffer
    fflush(stdout); // Flush output buffer
    scanf("%i",&t);

    v = u+a*t; // Calculate final velocity using the formula v = u + at
    //(where u is initial velocity, a is acceleration, and t is time)

    printf("\nthe final velocity : %i\n",v);


    s = u*t+0.5*a*(t^2); // Calculate distance using the formula s = ut + 0.5at^2
    //(where u is initial velocity, a is acceleration, and t is time)
    printf("the distance traversed : %i\n",s);

    return 0;
}
