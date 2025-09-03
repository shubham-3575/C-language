/* E.The length & breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the 
area & perimeter of the rectangle, and the area & 
circumference of the circle.*/
#include<stdio.h>
int main(){
    float len,brd,rad;
    printf("Enter the Length breadth and radius:\n");
    scanf("%f %f %f",&len,&brd,&rad);
    printf("Area Of the Rectangle: %f\nPerimeter of the Rectangle: %f\nArea of the circle: %f\nCircumference of the circle: %f",(len*brd),(2*(len+brd)),((22/7)*rad*rad),(2*(22/7)*rad));
    return 0;
}

//Output
/*Enter the Length breadth and radius:
2 3 7
Area Of the Rectangle: 6.000000
Perimeter of the Rectangle: 10.000000
Area of the circle: 147.000000
Circumference of the circle: 42.000000*/
