// Accept below number of rows and number of columns from user and display below pattern.
/*
Input : iRow = 4    iCol = 4

Output :    
A   B   C   D
a   b   c   d
A   B   C   D
a   b   c   d
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    
    printf("\n");

    for(i = 1; i <= iRow; i++)
    {
        char ch1 = 'A', ch2 = 'a';
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2) == 0)
            {
                printf("%c\t",ch2);
                ch2++;   
            }
            else
            {
                printf("%c\t",ch1);
                ch1++;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter the number of Columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}