/*Any integer is input through the keyboard. Write a program to 
find out whether it is an odd number or even number. */

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number to check whether is it even or odd");
    scanf("%d",&num);
    printf((num & 1)==1?"Num is odd":"Num is even");
    return 0;
}

/*OUTPUT:
    Enter the number to check whether is it even or odd 456768
    Num is even
*/