// 3. If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’)



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("enter five digit number:");
    scanf("%d", &n);
    int sum = 0;
    while(n>0){
        int last = n%10;
        sum = sum + last;
        n = n/10;
    }
    printf("Sum of five digit %d", sum);
    return 0;
}