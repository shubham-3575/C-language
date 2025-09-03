/*Any character is entered through the keyboard, write a 
program to determine whether the character entered is a 
capital letter, a small case letter, a digit or a special symbol. 
The following table shows the range of ASCII values for 
various characters.
Characters             ASCII Values
A - Z                   65 - 90
a - z                   97 - 122
0 - 9                   48 - 57
special symbols         0 - 47, 58 - 64, 91 - 96, 123 - 127
*/

//The stored chars defaultly stores as an ASCII Value
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the char to check whether it is capital,small,digit or a special symbol:\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90) printf("Capital");
    else if(ch>=97 && ch<=122) printf("Small");
    else if(ch>=48 && ch <= 57) printf("Digit");
    else printf("Special Symbol");
    return 0;
}

/*OUTPUT:
    Enter the char to check whether it is capital,small,digit or a special symbol:  
    A
    Capital

    Enter the char to check whether it is capital,small,digit or a special symbol:  
    1
    Digit

    Enter the char to check whether it is capital,small,digit or a special symbol:  
    a
    Small

    Enter the char to check whether it is capital,small,digit or a special symbol:  
    @
    Special Symbol  
*/