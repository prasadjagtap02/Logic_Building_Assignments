// write a program which accept width and height of rectangle from user and calculate its area

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    if(fWidth < 0 || fHeight <0)
    {
        printf("Invalid Width and Height");
        return -1;
    }

    dArea = fWidth * fHeight;
    return dArea;
}

int main()
{
    float fValue1 = 0, fValue2 = 0;
    double dRet = 0;

    printf("Enter the width :");
    scanf("%f",&fValue1);

    printf("Enter the height :");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf("The area of rectangle is : %.3lf",dRet);

    return 0;
}