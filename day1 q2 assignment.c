//2.Ramesh basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and the house rent allowance is 20% of the basic salary. Write a program to c 

#include <stdio.h>

int main(){
    float bs;
    float da = 0.4 * bs;
    float hra = 0.2 * bs;
    float gs;

    printf("Enter your basic salary: Rs ");
    scanf("%f", &bs);

    gs = bs + 0.4 * bs + 0.2 * hra;
    printf("Your gross salary is Rs %f", gs);
    return 0;
}