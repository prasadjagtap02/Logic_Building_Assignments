// Accept character from user. If character is small display its corresponding capital letter, and if it is capital then display its 
// corresponding small. In other cases display as it is.
/*
Input: Q
Output: q

Input: m
Output: M

Input: 4
Output: 4

Input: %
Output: %
*/

#include<stdio.h>

void Display(char ch)
{
    char cLower = '\0', cUpper = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        cLower = ch + 32;
        printf("%c",cLower);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        cUpper = ch - 32;
        printf("%c",cUpper);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character :");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}