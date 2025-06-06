// Accept N numbers from user and display summation of digits of each number
/*
Input : N : 6
Elements : 8225 665 3   76  953 858

Output :   17   17  3   13  17  21

*/

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iSize)
{
    int iCount = 0, iDigit = 0;
    
    for(iCount = 0; iCount < iSize; iCount++)
    {
        int iNo = Arr[iCount];
        int iSum = 0;
        while(iNo > 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("%d\t",iSum);
    }
    
}

int main()
{
    int iLength = 0, iCnt = 0;
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

    DigitsSum(ptr, iLength);

    free(ptr);

    return 0;
}