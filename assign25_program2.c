// Write a program which accept string from user and convert it into upper case
/*
Input: "Marvellous Multi OS"

Output: MARVELLOUS MULTI OS
*/

#include<stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        
        str++;
    }
}

int main()
{
    char arr[20];

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("\nThe converted string is : %s",arr);

    return 0;
}