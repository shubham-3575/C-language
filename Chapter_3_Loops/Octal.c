/*Write a program to find the octal equivalent of the entered 
number.*/

#include<stdio.h>
void main(){
    int num;
    int base = 1;
    int octal = 0;
    printf("Enter the Number to which you wanna know its equivalent Octal Value:\n");
    scanf("%d",&num);
    while(num>0){
    int rem = num%8;
     octal += rem*base;
     base *= 10;
     num /= 8;
    }
    printf("The Correspond octal value is: %d",octal);
}

/*Enter the Number to which you wanna know its equivalent Octal Value:
25
The Correspond octal value is: 31*/