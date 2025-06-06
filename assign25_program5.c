// Write a program which accept string from user and count number of white spaces
/*
Input: "MarvellouS"
Output: 0

Input: "MarvellouS Infosystems"
Output: 1

Input: "MarvellouS Infosystems by Piyush Manohar Khairnar"
Output: 5
*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str == ' '))
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
    int iRet = 0;

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);
    printf("\nThe count of white spaces is : %d\n",iRet);

    return 0;
}