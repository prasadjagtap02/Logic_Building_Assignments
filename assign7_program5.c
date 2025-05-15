// Write a program which returns difference between Even factorial and Odd factorial

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenF = 1, iOddF = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenF = iEvenF * iCnt;
        }
        else
        {
            iOddF = iOddF * iCnt;
        }
    }

    return (iEvenF - iOddF);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("The difference between Even and Odd factorial of number %d is : %d", iValue, iRet);

    return 0;
}