 // Accept character from user and check whether it is special symbol or not
/*
Input: %
Output: True

Input: m
Output: False
*/

#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

typedef int BOOL;

bool ChkSpecial(char ch)
{
    if((ch >= '!') && (ch <= '/') || (ch >= ':') && (ch <= '@'))
    {
        return true;
    }
    else
    {
        return false;
    }    
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character :");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("\nIt is a Special Character\n");
    }
    else
    {
        printf("\nIt is not a Special Character\n");
    }

    return 0;
}