// Write a program which accept string from user and copy capital characters of that string into another string
/*
Input: "Marvellous Multi OS"
Output: "MMOS"   in another string

*/

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    if((src == NULL) || (dest == NULL))
    {
        printf("Invalid string");
        return;
    }

    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;        
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];   //Empty string

    StrCpyCap(arr,brr);

    printf("\n%s\n",brr);   //MMOS

    return 0;
}