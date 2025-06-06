// Accept N numbers from user and accept one another number as NO, check whether NO is present or not
/*
Inout : N : 6
NO : 66
Elements : 85   66  3   66  93  88

Output :   True

Inout : N : 6
NO : 12
Elements : 85   11  3   15  11  111

Output :   False
*/

#include<stdio.h>
#include<stdlib.h>

# define true 1
# define false 0

typedef int bool;

bool Check(int Arr[], int iSize, int iNo)
{
    int iCount = 0;
    bool bOccurance = false;
    
    for(iCount = 0; iCount < iSize; iCount++)
    {
        if(Arr[iCount] == iNo)
        {
            bOccurance = true;
            break;
        }
    }

    return bOccurance;
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;
    bool bRet = false;

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

    bRet = Check(ptr, iLength, iValue);

    if(bRet == true)
    {
        printf("\nNumber %d is present\n",iValue);
    }
    else
    {
        printf("\nNumber %d is not present\n",iValue);
    }

    free(ptr);

    return 0;
}