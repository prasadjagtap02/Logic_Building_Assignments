// Write a program which accept string from user and accept one character. Return frequency of that character
/*
Input: "MarvellouS Multi OS"
        M
Output: 2

Input: "MarvellouS Multi OS"
        W
Output: 0

*/

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        
        str++;
    }
    
    return iCnt;
}

int main()
{
    char arr[100];
    char cValue = '\0';
    int iRet = 0;

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(arr, cValue);
    
    printf("\nThe character appears %d times in the given string\n",iRet);

    return 0;
}