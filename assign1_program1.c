/////////////////////////////////////////////////////////////////////////////////////////
//  File name :     assign1_program1.c
//  Description :   Used to Divide two numbers
//  Author :        Prasad Jagnnath Jagtap
//  Date :          09/05/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 > iNo1) //Applied filter to avoid returning float value
    {
        return -1;
    }
    
    iAns = iNo1 / iNo2; //Actual division of two numbers
    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);
    printf("The division of two numbers is : %d",iRet);

    return 0;
}