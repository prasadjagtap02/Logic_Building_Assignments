// Write a program which accept number from user and display its digits in reverse order

#include<stdio.h>

void DisplayReverseDigits(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number whose digits to be display :");
    scanf("%d",&iValue);

    DisplayReverseDigits(iValue);

    return 0;
}