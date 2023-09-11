// The Distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches, centimeters

#include <stdio.h>

int main(){
    int distance;
    int meters, centimeters;
    float feet, inch;
    printf("Enter the distance between two cities in km:");
    scanf("%d", &distance);

    meters = distance * 1000;
    printf("%d meters\n", meters);

    centimeters = distance * 100000;
    printf("%d centimeters\n", centimeters);

    inch = 39370.07 * distance;
    printf("%f inch\n", inch);

    return 0;

}