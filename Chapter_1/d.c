/* D.Temperature of a city in Fahrenheit degrees is input through 
the keyboard. Write a program to convert this temperature 
into Centigrade degrees. */
#include<stdio.h>
int main(){
    float temper,cent;
    printf("Enter Temperature in Fahrenheit:\n");
    scanf("%f",&temper);
    cent = temper-32;
    printf("Temperature in Centigrade degress:%f", cent);
    return 0;
}