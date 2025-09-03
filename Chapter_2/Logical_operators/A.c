/*Any year is entered through the keyboard, write a program to 
determine whether the year is leap or not. Use the logical 
operators && and ||. */
#include<stdio.h>
int main(){
    int year;
    printf("Enter the Year to Know whether it is leap or not:\n");
    scanf("%d",&year);
    if((year%4==0 && year%100 != 0)||(year%400 == 0))printf("Leap Year");
    else printf("Not a Leap Year");
    return 0;
}

/*OUTPUT
Enter the Year to Know whether it is leap or not:
2023
Not a Leap Year
*/