/*Given the length and breadth of a rectangle, write a program to 
find whether the area of the rectangle is greater than its 
perimeter. For example, the area of the rectangle with length = 5 
and breadth = 4 is greater than its perimeter. */
#include<stdio.h>
int main(){
    int l,b;
    printf("Enter the Length and Breadth of The rectangle:\n");
    scanf("%d %d",&l,&b);
    int area = l*b;
    int perimeter = 2*(l+b);
    if(area>perimeter) printf("The area is greater than its perimeter");
    else printf("The perimeter is greater");
    return 0;
}

/*OUTPUT
Enter the Length and Breadht of The rectangle:
12 13
The area is greater than its perimeter
*/