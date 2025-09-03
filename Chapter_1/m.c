/* M. If a five-digit number is input through the keyboard, write a 
program to print a new number by adding one to each of its 
digits. For example if the number that is input is 12391 then 
the output should be displayed as 23402. 
*/

#include<stdio.h>
void main(){
    char num[6];
    int i;
    printf("Enter 5 digit number:\n");
    scanf("%s",num);
    for(i=0; i<5; i++){
        num[i] = ((num[i]-'0' + 1)%10) + '0';
    }
    printf("Number after adding 1 to its every digits:%s",num);
}

//output
/*Enter 5 digit number:
12345
Number after adding 1 to its every digits:23456

Enter 5 digit number:
99999
Number after adding 1 to its every digits:00000
*/