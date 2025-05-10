/////////////////////////////////////////////////////////////////////////////////////////
//  File name :     assign2_program3.c
//  Description :   Used to print "Hello" and "Demo" if number taken from user is less than 10 condition
//  Author :        Prasad Jagnnath Jagtap
//  Date :          09/05/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
