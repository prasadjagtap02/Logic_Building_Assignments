// Write a program which accept string from user and return difference between frequency of small characters and frequency of capital character
/*
Input: "MarvellouS"

Output: 6 (8-2)
*/

#include<stdio.h>

int Difference(char *str)
{
    int iCapital = 0, iSmall = 0;

    if(str == NULL)
    {
        printf("\nString not found\n");
        return 0;
    }

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        str++;
    }

    return (iSmall - iCapital);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("\nThe difference is : %d\n",iRet);

    return 0;
}