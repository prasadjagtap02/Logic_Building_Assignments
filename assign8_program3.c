// Write a program which accept distance in kilometer and convert it into meter (1km = 1000 meter)

#include<stdio.h>

int KMToMeter(int iNo)
{
    int iRes = 0;
    iRes = 1000 * iNo;
    return iRes;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number of Kilometers :");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);
    printf("The given Kilometer %d converted into Meters are : %d",iValue, iRet);

    return 0;
}