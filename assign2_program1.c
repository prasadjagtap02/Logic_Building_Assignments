/////////////////////////////////////////////////////////////////////////////////////////
//  File name :     assign2_program1.c
//  Description :   Used to print '*' number of times based on user input
//  Author :        Prasad Jagnnath Jagtap
//  Date :          09/05/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //Write updater
    while(iCnt < iNo)
    {
        printf("*\n");
        iCnt++;
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