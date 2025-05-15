// Write a program which accept radius of circle from user and calculate its area

#include<stdio.h>
//#include<math.h>
//#define PI 3.14

double CircleArea(float fRadius)
{
    float fPi = 3.14;
    double dArea = 0.0;

    if(fRadius < 0)
    {
        printf("Invalid Radius");
        return -1;
    }

    dArea = fPi * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("The area of circle is : %.4lf",dRet);

    return 0;
}