// Write a program which accept string from user, reverse that string in place
/*
Input: "abcd"
Output: dcba

Input: "abba"
Output: abba
*/

#include<stdio.h>

void StrRevX(char *str)
{
    char *cStart = str;
    char *cEnd = str;
    char cCount = '\0';

    while(*cEnd != '\0')
    {
        cEnd++;
    }
    cEnd--;

    while(cStart < cEnd)
    {
        cCount = *cStart;
        *cStart = *cEnd;
        *cEnd = cCount;

        cStart++;
        cEnd--;
    }
}

int main()
{
    char arr[100];

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);
    
    printf("\nModifies string is : %s\n",arr);

    return 0;
}