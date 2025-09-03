/*H.If a five-digit number is input through the keyboard, write a 
program to reverse the number.*/

#include<stdio.h>
void main(){
    int num,rev=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    while(num != 0){
        int last = num%10;
        rev = rev*10+last;
        num /= 10;
    }
    printf("Reversed number : %d",rev);
}

//output
/*Enter the number:
564
Reversed number : 465*/