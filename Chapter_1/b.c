/* b.The distance between two cities (in km.) is input through the 
keyboard. Write a program to convert and print this distance 
in meters, feet, inches and centimeters*/
#include<stdio.h>
int main(){
    float dist,meters,feet,inches,centimeters;
    printf("Enter Distance between two cities:\n");
    scanf("%f",&dist);
    meters = dist*1000;
    printf("Distance in meters:%f\n",meters);
    feet =  meters*3.28084;
    printf("Distance in feets:%f\n",feet);
    inches = feet*12;
    printf("Distance in inches:%f\n",inches);
    centimeters = inches*2.54;
    printf("Distance in Centimteres:%f",centimeters);
    return 0;
}