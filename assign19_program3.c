// Accept N numbers from user and check whether that numbers contains 11 in it or not.
/*
Inout : 6
Elements : 85   66  11   80  93  88

Output :    11 is present

Inout : 6
Elements : 85   66  3   80  93  88

Output :    11 is absent
*/

#include<stdio.h>
#include<stdlib.h>

# define true 1
# define false 0

typedef int bool;

bool Check(int Arr[], int iSize)
{
    int iCount = 0;
    bool iNo = false; 
    
    for(iCount = 0; iCount < iSize; iCount++)
    {
        if(Arr[iCount] == 11)
        {
            iNo = true;
            break;
        }
    }

    return iNo;
}

int main()
{
    int iLength = 0, iCnt = 0;
    bool bRet = false;
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

    bRet = Check(ptr, iLength);

    if(bRet == true)
    {
        printf("\n");
        printf("11 is present\n");
    }
    else
    {
        printf("\n");
        printf("11 is absent\n");
    }

    free(ptr);

    return 0;
}