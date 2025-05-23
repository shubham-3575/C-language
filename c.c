/* c.If the marks obtained by a student in five different subjects 
are input through the keyboard, find out the aggregate marks 
and percentage marks obtained by the student. Assume that 
the maximum marks that can be obtained by a student in each 
subject is 100 */
#include<stdio.h>
int main(){
float sub1,sub2,sub3,sub4,sub5;
printf("Enter the marks of 5 subjects:");
scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);
float total = sub1+sub2+sub3+sub4+sub5;
float per = (total/500)*100;
printf("The total marks obtained are: %f\n Percentage is:%f",total,per);
return 0;
}