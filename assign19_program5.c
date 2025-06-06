// Accept N numbers from user and accept one another number as NO, return frequency of NO from it
/*
Inout : N : 6
NO : 66
Elements : 85   66  3   66  93  88

Output :   2

Inout : N : 6
NO : 12
Elements : 85   11  3   15  11  111

Output :   0
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iFreq = 0, iCount = 0;
    
    for(iCount = 0; iCount < iSize; iCount++)
    {
        if(Arr[iCount] == iNo)
        {
            iFreq++;
        }
    }

    return iFreq;
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

    iRet = Frequency(ptr, iLength, iValue);

    printf("\n");
    printf("Frequency of number %d is : %d ",iValue, iRet);
    printf("\n");

    free(ptr);

    return 0;
}