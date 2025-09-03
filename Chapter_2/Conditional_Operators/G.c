/*Write a program to check whether a triangle is valid or not, 
when the three angles of the triangle are entered through the 
keyboard. A triangle is valid if the sum of all the three angles 
is equal to 180 degrees.*/
#include<stdio.h>
int main(){
    int angle1,angle2,angle3;
    printf("ENter the Three angles of a Triangle:\n");
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    printf(angle1+angle2+angle3 == 180 ? "Triangle is Valid":"Triangle is Not valid");
    return 0;
}

/*OUTPUT
    ENter the Three angles of a Triangle:   
13 14 153
Triangle is Valid

ENter the Three angles of a Triangle:   
12 12 14
Triangle is Not valid
*/