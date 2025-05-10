/////////////////////////////////////////////////////////////////////////////////////////
//  File name :     assign3_program3.c
//  Description :   Used to print even factors of the number taken from user
//  Author :        Prasad Jagnnath Jagtap
//  Date :          10/05/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d  ",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}