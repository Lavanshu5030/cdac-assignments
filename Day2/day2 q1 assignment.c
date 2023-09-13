// 1.	Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. 		
// 	Assume that employees do not work for fractional part of an hour.


#include <stdio.h>

int main(){
    int time;
    printf("Enter number of hours:");
    scanf("%d", &time);
    int overtime;
    if ( time > 40){
        overtime = (time - 40)*12*10;
        printf("%d", overtime);
    }
    else{
        printf("No overtime hour");
    }

}