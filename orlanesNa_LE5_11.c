/*======================================================================
 FINALNAME  : orlanesNa_LE5_11.c
 DESCRIPTION: Program that will ask 10 integers and display the average of 
              all even numbers and the product of all odd numbers entered by the user 
 AUTHOR     : Nathan John G. Orlanes
 CREATED    : 29 September 2021
========================================================================*/

#include<stdio.h>

int main()
{
    int sum = 0, num = 0, product = 1, totalevenNumbers = 0;
    float avg = 0;
    printf("Enter 10 numbers : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        if ((num % 2) == 0)
        {
            sum += num;
            totalevenNumbers++;
        }
        else
        {
            product *= num;
        }
    }
    avg = sum / totalevenNumbers;
    printf("Average = %.2f\n", avg);
    printf("Product = %d", product);
    return 0;
}