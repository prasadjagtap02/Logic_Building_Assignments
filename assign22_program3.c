// Accept Character from user and check wehther it is digit or not (0-9)
/*
Input: 7
Output: True

Input: d
Output: False
*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigit(char ch)
{
    if((ch >= 48) && (ch <= 57))
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

    bRet = CheckDigit(cValue);

    if(bRet == TRUE)
    {
        printf("\nIt is Digit\n");
    }
    else
    {
        printf("\nIt is not a Digit\n");
    }

    return 0;
}