/*Two numbers are entered through the keyboard. Write a 
program to find the value of one number raised to the power 
of another. */
#include<stdio.h>
void main(){
    int x,y,power=1;
    printf("Enter the Values of X and Y\n");
    scanf("%d %d",&x,&y);
    int v = y;
    while(y!=0){
        power *= x;
        y--;
    }
    printf("The Power of %d power  %d is %d",x,v,power);
}

/*Enter the Values of X and Y
2 3
The Power of 2 power  3 is 8*/