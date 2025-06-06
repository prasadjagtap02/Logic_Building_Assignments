// Accept N numbers from user and return frequency of even numbers.
/*
Inout : 6
Elements : 85   66  3   80  93  88

Output :    3
*/

#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iSize)
{
    int iEven = 0, iCount = 0;
    
    for(iCount = 0; iCount < iSize; iCount++)
    {
        if(((Arr[iCount] % 2) == 0))
        {
            iEven++;
        }
    }

    return iEven;
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

    iRet = Display(ptr, iLength);

    printf("\n");
    printf("Frequency of even numvers is : %d ",iRet);
    printf("\n");

    free(ptr);

    return 0;
}