 // Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small
// then print all the character in reverse order till a. In other cases return directly.
/*
Input: Q
Output: Q   R   S   T   U   V   W   X   Y   Z

Input: m
Output: m   l   k   j   i   h   g   f   e   d   c   b   a

Input: 8
Output: 8

Input: %
Output: %
*/

#include<stdio.h>

void Display(char ch)
{
    char cCount = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(cCount = ch; cCount <= 'Z'; cCount++)
        {
            printf("%c\t",cCount);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(cCount = ch; cCount >= 'a'; cCount--)
        {
            printf("%c\t",cCount);
        }
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