/////////////////////////////////////////////////////////////////////////////////////////
//  File name :     assign1_program3.c
//  Description :   Used to print 5 to 1 numbers
//  Author :        Prasad Jagnnath Jagtap
//  Date :          09/05/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    //int i = 0;
    int i = 5;
    while(i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
}
int main()
{
    Display();

    return 0;
}