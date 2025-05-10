/////////////////////////////////////////////////////////////////////////////////////////
//  File name :     assign2_program2.c
//  Description :   Used to print '*' number of times based on user input
//  Author :        Prasad Jagnnath Jagtap
//  Date :          09/05/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    //Write Updater
    while(iNo > 0)
    {
        printf("*\n");
        iNo--;
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