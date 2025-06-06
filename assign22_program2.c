// Accept Character from user and check wehther it is capital or not (A-Z)
/*
Input: F
Output: True

Input: d
Output: False
*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckCapital(char ch)
{
    if((ch >= 65) && (ch <= 90))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character :");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
        printf("\nIt is Capital Character\n");
    }
    else
    {
        printf("\nIt is not a Capital Character\n");
    }

    return 0;
}