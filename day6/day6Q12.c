/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.


Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include<stdio.h>
int main ()
{
    int a;
    printf("enter the integer");
    scanf("%d",&a);
    if (a>0)
    {
        printf("the integer %d is positive ",a);
    }
    else if (a<0)
    {
        printf("the integer %d is negative ",a);
    }
    else 
    {
        printf("the integer %d is zero",a);
    }
    return 0;
}