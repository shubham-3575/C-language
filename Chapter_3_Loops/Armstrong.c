/*Write a program to print out all Armstrong numbers between 
1 and 500. If sum of cubes of each digit of the number is 
equal to the number itself, then the number is called an 
Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 
* 5 ) + ( 3 * 3 * 3 )*/
#include<stdio.h>
void main(){
    int i=1;
    printf("The Armstrong number between 1 to 500 are as follows\n");
    while(i<=500){
        int num = i;
        int armstrong = 0;
        while(num!=0){
            int lastdigit = num%10;
            int cube = lastdigit*lastdigit*lastdigit;
            armstrong += cube;
            num /= 10;
        }
        if(i==armstrong){
            printf("%d ",armstrong);
        }
        i++;
    }    
}
/*The Armstrong number between 1 to 500 are as follows
1 153 370 371 407*/