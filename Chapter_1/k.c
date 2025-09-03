/* K.A cashier has currency notes of denominations 10, 50 and 
100. If the amount to be withdrawn is input through the 
keyboard in hundreds, find the total number of currency notes 
of each denomination the cashier will have to give to the 
withdrawer. */

#include<stdio.h>
void main(){
    int amount;
    printf("The currency is available in Denominations of 10, 50 and 100\n");
    printf("Enter the amount you want to withdraw:");
    scanf("%d",&amount);
    int den100 = amount/100;
    printf("the total number of  currency notes of 100 denomination the cashier will give: %d\n",den100);
    printf("the total number of  currency notes of 50 denomination the cashier will give: %d\n",(amount/50));
    printf("the total number of  currency notes of 10 denomination the cashier will give: %d\n",(amount/10));
}

//output
/*The currency is available in Denominations of 10, 50 and 100
Enter the amount you want to withdraw:200
the total number of  currency notes of 100 denomination the cashier will give: 2
the total number of  currency notes of 50 denomination the cashier will give: 4 
the total number of  currency notes of 10 denomination the cashier will give: 20*/