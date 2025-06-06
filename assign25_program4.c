// Write a program which accept string from user and display only digits from that string
/*
Input: "Marve89llous121"
Output: 89121

Input: "Demo"
Output: 
*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
                
        str++;
    }
}

int main()
{
    char arr[20];

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",arr);

    printf("\nThe digits from string are : \t");
    DisplayDigit(arr);

    return 0;
}