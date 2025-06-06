// Write a program which accept string from user and accept one character. Check whether that character is present in string or not.
/*
Input: "MarvellouS"
        e
Output: True

Input: "MarvellouS Infosystems"
        W
Output: False

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

bool ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }
        
        str++;
    }
    return false;
}

int main()
{
    char arr[100];
    char cValue = '\0';
    bool bRet = false;

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);
    
    if(bRet == true)
    {
        printf("\nCharacter found in the given string\n");
    }
    else
    {
        printf("\nCharacter not found in the given string\n");
    }

    return 0;
}