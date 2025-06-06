// Accept N numbers from user and accept one another number as NO, returnn index of first occurance of that NO.
/*
Inout : N : 6
NO : 66
Elements : 85   66  3   66  93  88

Output :   1

Inout : N : 6
NO : 12
Elements : 85   11  3   15  11  111

Output :   -1
*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iSize, int iNo)
{
    int iCount = 0;
    
    for(iCount = 0; iCount < iSize; iCount++)
    {
        if(Arr[iCount] == iNo)
        {
            return iCount;
        }
    }

    return -1;
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    printf("Enter the number : ");
    scanf("%d",&iValue);

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

    iRet = FirstOcc(ptr, iLength, iValue);

    if(iRet == -1)
    {
        printf("\nThere is no such number present in the list\n");
    }
    else
    {
        printf("\nThe occurance of first %d is : %d\n",iValue, iRet);
    }

    free(ptr);

    return 0;
}