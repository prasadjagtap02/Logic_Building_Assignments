// Accept Character from user and check wehther it is alphabet or not (A-Z a-z)
/*
Input: F
Output: True

Input: &
Output: False
*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char ch)
{
    BOOL bRes = FALSE;
    if((ch >= 65) && (ch <= 90) || (ch >= 97) && (ch <= 122))
    {
        bRes = TRUE;
    }
    else
    {
        bRes = FALSE;
    }

    return bRes;

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character :");
    scanf("%c",&cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is alphabet");
    }
    else
    {
        printf("It is not alphabet");
    }

    return 0;
}