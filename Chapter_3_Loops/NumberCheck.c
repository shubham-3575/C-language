/*Write a program to enter the numbers till the user wants and 
at the end it should display the count of positive, negative and 
zeros entered.*/
#include<stdio.h>
void main(){
    int num;
    int positive = 0,negative=0,zeroes=0;
    char input = 'y';
    while(input == 'y' || input == 'Y'){
    printf("Enter The Number\n");
    scanf("%d",&num);
    if(num>0) positive++;
    else if(num<0) negative++;
    else zeroes++;
    printf("Enter again ?(Y) :\n");
    scanf(" %c",&input); //Here the space matters alot after the inverted comma to consider this input else it directly prints the Output without asking the user choice
    }
    printf("Count of \n Positive is %d\nNegative is %d\n Zeroes is %d",positive,negative,zeroes);
}

/*Enter The Number
12
Enter again ?(Y) :
y
Enter The Number
34
Enter again ?(Y) :
y
Enter The Number
0
Enter again ?(Y) :
y
Enter The Number
-9
Enter again ?(Y) :
y
Enter The Number
-0
Enter again ?(Y) :
y
Enter The Number
6
Enter again ?(Y) :
n
Count of
 Positive is 3
Negative is 1
 Zeroes is 2*/