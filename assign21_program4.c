// Accept N numbers from user and display all such numbers which contains 3 digits in it
/*
Input : N : 6
Elements : 8225 665 3   76  953 858

Output :   665  953 858

*/

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iSize)
{
    int iCount = 0, iLower = 100, iUpper = 999;

    printf("\nThe 3-Digit numbers are as below :\n");
    
    for(iCount = 0; iCount < iSize; iCount++)
    {
        if((Arr[iCount] >= 100) && (Arr[iCount] <= 999))
        {
            printf("%d\t",Arr[iCount]);
        }
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

    Digits(ptr, iLength);

    free(ptr);

    return 0;
}