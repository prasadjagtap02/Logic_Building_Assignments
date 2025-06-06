// Accept N numbers from user and return the difference between largest and smallest number
/*
Input : N : 6
Elements : 85   66  3   66  93  88

Output :   90 (93 - 3)

*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCount = 0, iMax = Arr[0], iMin = Arr[0];

    for(iCount = 0; iCount < iSize; iCount++)
    {
        if(Arr[iCount] < iMin)
        {
            iMin = Arr[iCount];
        }
        else if(Arr[iCount] > iMax)
        {
            iMax = Arr[iCount];
        }
    }

    return (iMax - iMin);
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the %d elements :\n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr, iLength);

    printf("\nThe difference between largest and smallest number from the elements is : %d \n",iRet);

    free(ptr);

    return 0;
}