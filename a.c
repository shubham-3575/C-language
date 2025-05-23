/* a.Ramesh’s basic salary is input through the keyboard. His 
dearness allowance is 40% of basic salary, and house rent 
allowance is 20% of basic salary. Write a program to calculate 
his gross salary. */

#include<stdio.h>
int main(){
    float sal,dearnessallowance,houserent;
    printf("Enter Basic salary of Ramesh\n");
    scanf("%f",&sal);
    dearnessallowance = (40*sal)/100;
    houserent = (20*sal)/100;
    printf("Ramesh gross salary is: %f",(sal+dearnessallowance+houserent));
    return 0;
}
