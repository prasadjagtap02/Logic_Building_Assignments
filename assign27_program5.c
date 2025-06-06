// Write a program which accept 2 strings from user and concat second string after first string (Implement StrCat() function)
/*
Input: "Marvellous Infosystem"
        "Logic Building"
Output: "Marvellous Infosystem Logic Building"   in another string

*/

#include<stdio.h>

void StrCat(char *src, char *dest)
{
    //Filter
    if((src == NULL) || (dest == NULL))
    {
        printf("Invalid string");
        return;
    }

    while(*src != '\0')     //Traverse first string till end
    {
        src++;  
    }
    
    while(*dest != '\0')    //Copy contents of destination in source
    {
        *src = *dest;
        src++;
        dest++;
    }
    
    *dest = '\0';
}

int main()
{
    char arr[50] = "Marvellous Infosystem";
    char brr[30] = "Logic Building";   

    StrCat(arr,brr);

    printf("\n%s\n",arr);   //Marvellous Infosystem Logic Building

    return 0;
}