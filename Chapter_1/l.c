/* L.If the total selling price of 15 items and the total profit earned 
on them is input through the keyboard, write a program to 
find the cost price of one item.*/

#include<stdio.h>
int main(){
    float priceof15items,totalprofitearned;
    printf("Enter the Selling price of 15 items and total profit earned on the items\n");
    scanf("%f %f",&priceof15items,&totalprofitearned);
    float cp = priceof15items - totalprofitearned;
    printf("Cost of One item:%f",(cp/15));
    return 0;
}

//output
/*Enter the Selling price of 15 items and total profit earned on the items
100
15
Cost of One item:5.666667*/