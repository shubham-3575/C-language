/*If cost price and selling price of an item is input through the 
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit 
he made or loss he incurred. 
*/
#include<stdio.h>
int main(){
    int cp,sp,profit;
    printf("Enter Cost price and selling price:");
    scanf("%d %d",&cp,&sp);
    if(sp>cp) {
        profit = sp-cp;
        printf("The seller had made a profit of %d",profit);
    }
    else if(sp == cp) printf("the seller had not made profit nor loss");
    else {
        profit = cp-sp;
        printf("The seller has incurred a loss of rupees %d",profit);
    }
    return 0;
}

/*OUTPUT:
Enter Cost price and selling price:23 30

The seller had made a profit of 7*/