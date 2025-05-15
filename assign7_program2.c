// Accept Amount in US Doller and return its corresponding value in Indian currency. Consider 1$ as 70 rupees

#include<stdio.h>

int DollerToINR(int iNo)
{
    int iRes = 0;
    iRes = iNo * 70;
    return iRes;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number of USD : ");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);
    printf("The Indian rupees of the USD $%d is : %d",iValue, iRet);

    return 0;
}