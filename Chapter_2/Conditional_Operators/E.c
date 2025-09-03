/*A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine 
whether the original and reversed numbers are equal or not. */
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int original = num;
    int rev = 0;
    while(num != 0){
        int rem = num%10;
        rev = rev*10+rem;
        num /= 10;
    }
    printf("The Reversed Number is: %d\n ",rev);
    if(original == rev) 
    printf("The entered and reversed number are equal");
    return 0;
}

/*OUTPUT
    Enter the number:12321
    The Reversed Number is: 12321
    The entered and reversed number are equal
*/