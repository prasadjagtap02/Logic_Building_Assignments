// Accept N numbers from user and accept Range, display all elements from that range
/*
Input : N : 6
Start: 60   End: 90
Elements : 85   66  3   76  93  88

Output :   66   76  88

Input : N : 6
Start: 30   End: 50
Elements : 85   66  3   76  93  88

Output :   No elements found

*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCount = 0, iFlag = 0;
    
    for(iCount = 0; iCount < iSize; iCount++)
    {
        if((Arr[iCount] >= iStart) && (Arr[iCount] <= iEnd))
        {
            printf("%d\t",Arr[iCount]);
            iFlag = 1;
        }
    }

    if(iFlag == 0)
    {
        printf("\nThere are no elements in the specified range\n");
    }
}

int main()
{
    int iLength = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    printf("Enter the start of the range : ");
    scanf("%d",&iValue1);

    printf("Enter the end of the range : ");
    scanf("%d",&iValue2);

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

    Range(ptr, iLength, iValue1, iValue2);

    free(ptr);

    return 0;
}