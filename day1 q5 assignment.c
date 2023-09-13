// 5.Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.


#include <stdio.h>

int main() {
    // Write C code here
    int a,b;
    printf("Enter two numbers;");
    scanf("%d %d", &a,&b);
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d After swapping", a,b);

    return 0;
}