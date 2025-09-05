/*Write a program to find the factorial value of any number 
entered through the keyboard. */
#include<stdio.h>
int main(){
    int num;
    printf("Enter the num to find Factorial");
    scanf("%d",&num);
    long fact=1,r=num;
    while(num!=0){
        fact *= num;
        num--;
    }
    printf("The Factorial of %d is %ld",r,fact);
}