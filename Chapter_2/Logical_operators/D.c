/*A certain grade of steel is graded according to the following 
conditions: 
(i) Hardness must be greater than 50 
(ii) Carbon content must be less than 0.7 
(iii) Tensile strength must be greater than 5600 
The grades are as follows: 
Grade is 10 if all three conditions are met 
Grade is 9 if conditions (i) and (ii) are met 
Grade is 8 if conditions (ii) and (iii) are met 
Grade is 7 if conditions (i) and (iii) are met 
Grade is 6 if only one condition is met 
Grade is 5 if none of the conditions are met 
Write a program, which will require the user to give values of 
hardness, carbon content and tensile strength of the steel 
under consideration and output the grade of the steel. */

#include<stdio.h>
int main(){
    int hrdns,tnsl;
    float ccntnt;
    printf("Enter the values of Hardness , Carbon Content(must be of floating type) and Tensile Strenght\n");
    scanf("%d %f %d",&hrdns,&ccntnt,&tnsl);
    if(hrdns>50 && ccntnt<0.7 && tnsl>5600) printf("Grade is 10");
    else if(hrdns>50 && ccntnt<0.7) printf("Grade is 9");
    else if(ccntnt<0.7 && tnsl>5600) printf("Grade is 8");
    else if(hrdns>50 && tnsl>5600) printf("Grade is 7");
    else if(hrdns>50 || ccntnt<0.7 || tnsl>5600) printf("Grade is 6");
    else printf("Grade is 5");
    return 0;
}

/*OUTPUT

    Enter the values of Hardness , Carbon Content(must be of floating type) and Tensile Strenght        
    3 4.3 4
    Grade is 5
*/
