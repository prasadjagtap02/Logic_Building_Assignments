/////////////////////////////////////////////////////////////////////////////////////////
//  File name :     assign3_program1.c
//  Description :   Used to print even numbers as input given by user
//  Author :        Prasad Jagnnath Jagtap
//  Date :          10/05/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    
    int iCnt = 0;
    int iEven = 2;
    while(iCnt < iNo)
    {
        printf("%d  ",iEven);
        iEven = iEven + 2;
        iCnt++;
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter Number :");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}