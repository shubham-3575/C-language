/*Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every 
hour worked above 40 hours. Assume that employees do not 
work for fractional part of an hour*/
#include<stdio.h>
void main(){
    int overtimepay;
    int workhours;
    for(int i=0; i<10;i++){
        printf("Enter Your Working Hours\n");
        scanf("%d",&workhours);
        if(workhours>40){
            int hours = workhours - 40;
            printf("Your Overtime Pay is %d \n",hours*12);
            overtimepay += hours*12;
        }
    }
    printf("Total Overtime Pay of Ten Employess is: %d",overtimepay);
}

/*
Enter Your Working Hours
12
Enter Your Working Hours
13
Enter Your Working Hours
17
Enter Your Working Hours
41
Your Overtime Pay is 12
Enter Your Working Hours
44
Your Overtime Pay is 48
Enter Your Working Hours
13
Enter Your Working Hours
78
Your Overtime Pay is 456
Enter Your Working Hours
67
Your Overtime Pay is 324
Enter Your Working Hours
78
Your Overtime Pay is 456
Enter Your Working Hours
89
Your Overtime Pay is 588
Total Overtime Pay of Ten Employess is: 2338*/