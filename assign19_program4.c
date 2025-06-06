// Accept N numbers from user and return frequency of 11 from it.
/*
Inout : 6
Elements : 85   66  3   80  93  88

Output :   0

Inout : 6
Elements : 85   11  3   15  11  111

Output :   2
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iFreq = 0, iCount = 0;
    
    for(iCount = 0; iCount < iSize; iCount++)
    {
        if(Arr[iCount] == 11)
        {
            iFreq++;
        }
    }

    return iFreq;
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
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter %d elements : \n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr, iLength);

    printf("\n");
    printf("Frequency of number 11 is : %d ",iRet);
    printf("\n");

    free(ptr);

    return 0;
}