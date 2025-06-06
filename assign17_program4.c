// Accept number of rows and number of columns from user and display below pattern
/*
Input : iRow: 6     iCol: 6
Outout :
*   *   *   *   *   *
*   #   #   #   *   *
*   #   #   *   $   *
*   #   *   $   $   *
*   *   $   $   $   *
*   *   *   *   *   *
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow == iCol)
    {
        printf("\n");
        for(i = iRow; i > 0; i--)
        {
            for(j = 1; j <= iCol; j++)
            {
                if((i == j) || (i == 1) || (i == iRow) || (j == 1) || (j == iCol))
                {
                    printf("*\t");
                }
                else if(i > j)
                {
                    printf("#\t");
                }
                else
                {
                    printf("$\t");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n");
        printf("Invalid Input! Please enter same number for Rows and Columns");
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

    Pattern(iValue1,iValue2);

    return 0;
}