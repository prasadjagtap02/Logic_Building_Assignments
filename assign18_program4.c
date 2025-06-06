// Accept N numbers from user and display all such elements which are divisible by 3 & 5.
/*
Inout : 6
Elements : 85   66  3   15  93  88

Output :    15
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iDivisible = 0, iCount = 0;
    
    for(iCount = 0; iCount < iSize; iCount++)
    {
        if(((Arr[iCount] % 3) == 0) && ((Arr[iCount] % 5) == 0))
        {
            printf("\n");
            printf("The element %d is divisible by 3 and 5\n", Arr[iCount]);
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
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

    Display(ptr, iLength);

    free(ptr);

    return 0;
}