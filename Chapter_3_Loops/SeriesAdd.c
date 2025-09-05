/*Write a program to add first seven terms of the following 
series using a for loop: 
1/1! + 2/2! + 3/3!+....*/
#include<stdio.h>
void main(){
    printf("The First Seven terms Sum is as Follows:\n");
    float sum = 0;
    for(int i=1;i<7;i++){
        int fact = 1,num=i;
        while(num!=0){
            fact *= num;
            num--;
        }
        sum += (float)(i)/(fact);
    }
    printf("%f",sum);
}