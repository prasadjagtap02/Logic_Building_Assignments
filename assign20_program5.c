// Accept N numbers from user and return product of all odd elements.
/*
Input : N : 6
Elements : 15   66  3   70  10  88

Output :   45

Input : N : 6
Elements : 44   66  72   70  10  88

Output :   1

*/

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{
    int iCount = 0, iRes = 1, iIsOdd = 0;
    
    for(iCount = 0; iCount < iSize; iCount++)
    {
        if((Arr[iCount] % 2) != 0)
        {
            iRes = iRes * Arr[iCount];
            iIsOdd = 1;
        }
    }

    if(iIsOdd == 0)
    {
        return 0;
    }

    return iRes;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter %d elements : \n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Product(ptr, iLength);

    printf("The product of all odd elements is : %d", iRet);

    free(ptr);

    return 0;
}