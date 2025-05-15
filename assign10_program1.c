// Write a program which accept number from user and return the count of even digits

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);
    printf("Even number count in user provided number %d is : %d",iValue, iRet);

    return 0;
}