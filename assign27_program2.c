// Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function)
/*
Input: "Marvellous Multi OS"
Output: "Marvellous"   in another string

*/

#include<stdio.h>

void StrnCpy(char *src, char *dest, int iCnt)
{
    if((src == NULL) || (dest == NULL))
    {
        printf("Invalid string");
        return;
    }

    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];   //Empty string

    StrnCpy(arr,brr,10);

    printf("\n%s\n",brr);   //Marvellous

    return 0;
}