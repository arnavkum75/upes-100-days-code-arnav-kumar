/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>
int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    if(x>='A'&&x<='Z')
    {
        printf("the character %c is a Uppercase alphabet",x);
    }
    else if (x>='a'&&x<='z')
    {
        printf("the character %c is a lowercase alphabet",x);
    }
    else if(x>='0'&&x<='9')
    {
        printf("the character %c is a digit",x);
    }
    else 
    {
        printf("the character %c is a special character",x);
    }
    return 0;
}