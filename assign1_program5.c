/////////////////////////////////////////////////////////////////////////////////////////
//  File name :     assign1_program5.c
//  Description :   Used to print '*' number of times based on user input
//  Author :        Prasad Jagnnath Jagtap
//  Date :          09/05/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}