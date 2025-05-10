/////////////////////////////////////////////////////////////////////////////////////////
//  File name :     assign3_program4.c
//  Description :   Used to convert case of the character given by user
//  Author :        Prasad Jagnnath Jagtap
//  Date :          09/05/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = toupper(cValue);
        printf("%c ",cValue);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        cValue = tolower(cValue);
        printf("%c",cValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}