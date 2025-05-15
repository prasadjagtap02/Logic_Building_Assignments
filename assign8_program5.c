// Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 square meter)

#include<stdio.h>

double FeetToMeter(float fFeet)
{
    double dMeter = 0.0;
    dMeter = fFeet * 0.0929;
    return dMeter;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet :");
    scanf("%f",&fValue);

    dRet = FeetToMeter(fValue);
    printf("The Feet converted in Meter are : %lf",dRet);

    return 0;
}