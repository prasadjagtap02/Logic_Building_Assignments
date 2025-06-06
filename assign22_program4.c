// Accept Character from user and check wehther it is small case or not (a-z)
/*
Input: g
Output: True

Input: D
Output: False
*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch >= 97) && (ch <= 122))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("\nIt is Small case Character\n");
    }
    else
    {
        printf("\nIt is not a Small case Character\n");
    }

    return 0;
}