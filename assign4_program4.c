// Write a program which accept number from user and return summation of all its non-factors.

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("The summation of number %d is : %d", iValue, iRet);

    return 0;
}