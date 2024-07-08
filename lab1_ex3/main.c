/*
 * main.c
 */

#include <stdio.h>

// global variable uninitialized : zero
unsigned int sec;

int main(){
    // local variable uninitialized : garbage value
    unsigned int hours=0, minutes=0, seconds=0;

    printf("Enter the seconds: ");
    fflush(stdin); // Flush input buffer
    fflush(stdout); // Flush output buffer
    scanf("%i",&sec);

    // Calculate hours, minutes, and seconds

    // Calculate hours by dividing seconds by 3600
    hours = sec / 3600;
    // Calculate minutes by subtracting hours' worth of seconds and dividing by 60
    minutes = (sec - (3600 * hours)) / 60;
    // Calculate remaining seconds by subtracting hours and minutes in seconds
    seconds = (sec - (3600 * hours) - (minutes * 60));


    printf("%i : %i : %i",hours,minutes,seconds);

    return 0;
}
