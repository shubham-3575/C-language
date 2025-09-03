/* G.If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits. 
(Hint: Use the modulus operator ‘%’)*/

#include<stdio.h>
void main(){
    int num,sum=0;
    printf("Enter the five digit number:\n");
    scanf("%d",&num);
    while(num!=0){
       int rem = num%10;
        sum += rem;
        num /= 10;
    }
    printf("The sum of its digits is:%d",sum);
}

//output
/*Enter the five digit number:
12345
The sum of its digits is:15*/