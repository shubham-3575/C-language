/*Any year is input through the keyboard. Write a program to 
determine whether the year is a leap year or not. 
(Hint: Use the % (modulus) operator) */
#include<stdio.h>
int main(){
    int year;
    printf("Enter the Year to check whether it is Leap or not");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || year%100 == 0) printf("Year is a Leap");
    else printf("The year is not a leap");
    return 0;
}

/*OUTPUT:
    Enter the number to check whether is it even or odd 456768
    Num is even 

    run-2
    Enter the Year to check whether it is Leap or not 2024
    Year is a Leap

    run - 3
    Enter the Year to check whether it is Leap or not 2023
    The year is not a leap
*/