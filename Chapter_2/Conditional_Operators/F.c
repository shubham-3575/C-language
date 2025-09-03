/*If the ages of Ram, Shyam and Ajay are input through the 
keyboard, write a program to determine the youngest of the 
three*/
#include<stdio.h>
int main(){
    int ramage,shyamage,ajayage;
    printf("Enter the ages of Ram , Shyam and Ajay:\n");
    scanf("%d %d %d",&ramage,&shyamage,&ajayage);
    if(ramage<shyamage){
        if(ramage<ajayage){
            printf("The Ram is the younger one %d\n",ramage);
        }
        else if(ajayage<ramage){
            printf("Ajay is the Younger one %d",ajayage);
        }
        else{
            printf("Ram and Ajay are equally Youngest :%d\n",ramage);
        }
    }
        else if(shyamage<ramage){
            if(shyamage<ajayage){
         printf("Shyam is Youngest %d",shyamage);
        }
        else if(ajayage<shyamage) {
            printf("Ajay is Youngest %d",ajayage);
        }
        else{
            printf("Shyam and Ajya are equally Youngest:%d\n",shyamage);
        }
    }
    else{
        if(ramage<ajayage){
            printf("Ram and Shyam are equally Youngest :%d\n",ramage);
        }
        else if(ajayage<ramage){
            printf("AJay is the youngest :%d\n",ajayage);
        }
        else{
            printf("All three Have the same age :%d\n",ramage);
        }
    }
 
 return 0; 
}

/*OUTPUT:
    Enter the ages of Ram , Shyam and Ajay:
    11 12 14
    The Ram is the younger one 11
*/