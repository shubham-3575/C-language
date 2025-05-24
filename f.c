/* F.Two numbers are input through the keyboard into two 
locations C and D. Write a program to interchange the 
contents of C and D.*/

#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the value of two numbers:\n");
    scanf("%d %d", &num1, &num2);
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    printf("After Interchanging\nnum1: %d\nnum2: %d",num1,num2); 
    return 0;
}

//output
/*Enter the value of two numbers:
12
14
After Interchanging
num1: 14
num2: 12*/