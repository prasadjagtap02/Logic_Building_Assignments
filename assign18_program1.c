// Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
/*
Inout : 6
Elements : 85   66  3   80  93  88

Output :    53 (234 - 181)
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iEven = 0, iOdd = 0, iCount = 0;
    
    for(iCount = 0; iCount < iSize; iCount++)
    {
        if((Arr[iCount] % 2) == 0)
        {
            iEven = iEven + Arr[iCount];
        }
        else
        {
            iOdd = iOdd + Arr[iCount];
        }
    }

    return (iEven - iOdd);
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr, iLength);

    printf("\n");
    printf("The difference between even elements and odd elements is : %d",iRet);
    printf("\n");

    free(ptr);

    return 0;
}