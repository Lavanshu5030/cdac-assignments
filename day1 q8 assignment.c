// 8.	Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, 
// 	the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.

#include <stdio.h>

int main(){
    int lenght, breadth;
    printf("Enter length of rectangle:");
    scanf("%d", &lenght);

    printf("Enter breadth of rectangle:");
    scanf("%d", &breadth);

    int area = lenght * breadth;
    int perimeter = 2 * (lenght + breadth);

    if (area > perimeter){
        printf("Area of rectangle is greater");
    }
    else{
        printf("Perimeter of rectangle is greater");
    }

}