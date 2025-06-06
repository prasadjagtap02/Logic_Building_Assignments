// Write a program which accept string from user and check whether it contains vowels or not
/*
Input: "marvellous"
Output: True

Input: "Demo"
Output: True

Input: "xyz"
Output: False
*/

#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    if(str == NULL)
    {
        printf("\nString not found\n");
        return 0;
    }

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            return true;
            break;
        }
        str++;
    }
    return false;
}

int main()
{
    char arr[20];
    BOOL bRet = false;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("\nIt contains Vowel\n");
    }
    else
    {
        printf("\nIt does not contains Vowel\n");
    }

    return 0;
}