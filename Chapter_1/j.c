/* J.In a town, the percentage of men is 52. The percentage of 
total literacy is 48. If total percentage of literate men is 35 of 
the total population, write a program to find the total number of illiterate men and women if the population of the town is 
80,000.*/

#include<stdio.h>
void main(){
    int totalpop = 80000;
    int men = (52.0/100)*totalpop;
    int literacy = (48.0/100)*totalpop;
    int literatemen = (35.0/100)*totalpop;
    int illiteratemen = men-literatemen;
    int women = totalpop-men;
    int literatewomen = literacy-literatemen;
    int illiteratewomen = women - literatewomen;
    printf("The total number of illiterate men are: %d\nand women: %d",illiteratemen,illiteratewomen);
}

//output
/*The total number of illiterate men are: 13600
and women: 28000*/