// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    if (scanf("%d", &total_seconds) != 1 || total_seconds < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("Time in HH:MM:SS format: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}