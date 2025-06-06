// Write a program which accept string from user and accept one character. Return index of first occurance of that character
/*
Input: "MarvellouS Multi OS"
        M
Output: 0

Input: "MarvellouS Multi OS"
        W
Output: -1

Input: "MarvellouS Multi OS"
        e
Output: 4

*/

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iLoc = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iLoc;
            break;
        }
        
        iLoc++;
        str++;
    }
    
    return -1;
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

    iRet = FirstChar(arr, cValue);
    
    printf("\nThe character index is : %d\n",iRet);

    return 0;
}