// Write a program which accept N and print first 5 multiples of N
#include<stdio.h>

void MultiplyDisplay(int iNo)
{
    int iCnt = 0;
    //int iNum = 5;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",iCnt * iNo);
    }
}

int main()
{
     int iValue = 0;

     printf("Enter the number :");
     scanf("%d",&iValue);

     MultiplyDisplay(iValue);

     return 0;
}