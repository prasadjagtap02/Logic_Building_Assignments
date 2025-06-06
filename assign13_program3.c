// Accept below number of rows and number of columns from user and display below pattern.
/*
Input : iRow = 4    iCol = 4

Output :    
A   A   A   A   A
B   B   B   B   B
C   C   C   C   C
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'A';
    printf("\n");

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);  
        }
        printf("\n");
        ch++;
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