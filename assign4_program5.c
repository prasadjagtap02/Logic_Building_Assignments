// Write a program which accept number from user and return difference between summation of all factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSumF = 0, iSumN = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumF = iSumF + iCnt;
        }
        else
        {
            iSumN = iSumN + iCnt;
        }
    }
    return (iSumF - iSumN);

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("The difference between factros and non factors is : %d",iRet);

    return 0;
}