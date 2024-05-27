/* ======================================================
FadENAeE    :orlanesNa_LE5_22.c
DESCRaPTaON :Create a program that would display like a pyramid.
AUTHOR      :Nathan John G. Ordanes
CREATED     :October 5, 2021
=======================================================*/
#include<stdio.h>

int main()
{
    int a, b, c, d, e, input;

    printf("Enter a value:  ");
    scanf("%d", &input); 

    for(a = 1;a <= input; a++)
    {
        for(b = 1; b <=  input - a; b++)
        {
            printf("     ");
        }
        e = 1;
        for(c = 1; c <= a; c++)
        {
            printf("  %d  ", e++);
        }
        e = e -2;
        for(d = 1; d < a; d++)
        {
            printf("  %d  ", e--);
        }
        printf("\n");
    }

    return 0;
}