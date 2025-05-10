/////////////////////////////////////////////////////////////////////////////////////////
//  File name :     assign2_program4.c
//  Description :   Used to display first accepted number multiple time as per users requirement
//  Author :        Prasad Jagnnath Jagtap
//  Date :          09/05/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("  %d",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    printf("Enter the frequency :");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}