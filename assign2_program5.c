/////////////////////////////////////////////////////////////////////////////////////////
//  File name :     assign2_program5.c
//  Description :   Used to check number is Even or Odd
//  Author :        Prasad Jagnnath Jagtap
//  Date :          09/05/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)  //Checking the condition whether number is modulous of 2
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The number is Odd");
    }

    return 0;
}