/*Given a point (x, y), write a program to find out if it lies on the 
x-axis, y-axis or at the origin, viz. (0, 0). */
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinates value:\n");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0) printf("Lies on The origin");
    if(x==0 && y!=0) printf("Lies on Y-axis");
    if(x!=0 && y==0) printf("Lies on the X-axis");
    return 0;
    
}

/*OUTPUT
Enter the coordinates value:
0,2
Lies on Y-axis 
*/