// Write a program which accept string from user and display it in reverse order
/*
Input: "marvellous"
Output: suollevram
*/

#include<stdio.h>

void Reverse(char *str)
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
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("\nThe reversed string is : %s",arr);

    return 0;
}