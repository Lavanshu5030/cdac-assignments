// A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and 
// 	reversed numbers are equal or not.

#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter five digit number:");
    scanf("%d", &n);
    
    int final_num = 0;
    while(n > 0){
        int last_digit = n % 10;
        final_num = final_num * 10 + last_digit;
        n = n/10;
    }
    printf("%d", final_num);
    return 0;
}