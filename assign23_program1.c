// Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member 
// from 0 to 255

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("\nASCII Table\n");
    printf("Dec\tHex\tChar\n");
    printf("--------------\n");
    
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        if((iCnt >= 32) && (iCnt <= 126))
        {
            printf("%d\t%x\t%c\t\n", iCnt, iCnt, iCnt);
        }
        else
        {
            printf("%d\t\n",iCnt);
        }
    }
}

int main()
{
    DisplayASCII();

    return 0;
}


/*
Another Code for the output==>

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("\nASCII Table\n");
    printf("Dec\tHex\tChar\n");
    printf("--------------\n");
    
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t%x\t%c\t\n", iCnt, iCnt, iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}

*/