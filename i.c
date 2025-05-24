/* I.If a four-digit number is input through the keyboard, write a 
program to obtain the sum of the first and last digit of this 
number*/

#include<stdio.h>
void main(){
    int num,sum = 0;
    printf("Enter The four digit number:\n");
    scanf("%d",&num);
    int firstdigit = num/1000;
    int lastdigit = num%10;
    sum = lastdigit+firstdigit; 
    printf("Sum of first and last digit is: %d",sum);
}

//output
/*Enter The four digit number:
1234
Sum of first and last digit is: 5*/