/*======================================================================
 FINALNAME  : orlanesNa_LE5_21.c
 DESCRIPTION: Program will ask the user to input the number of rows and columns the table should have 
 			  and display the multiplication table on screen. Use tab for the spacing between numbers horizontally.
 AUTHOR     : Nathan John G. Orlanes
 CREATED    : 5 October 2021
========================================================================*/

#include <stdio.h>

int main()
{
    int inputrows, inputcolumns, row, col;

    printf ("Enter the number of rows: ");
    scanf ("%d", &inputrows);

    printf ("Enter the number of columns: ");
    scanf ("%d", &inputcolumns);

    for(row = 1; row <= inputrows; row++)
    {
        for(col = 1; col <= inputcolumns; col++)
        {
            printf("%d\t", col * row);
        }
    printf("\n"); 
    }
    
    return 0;
}