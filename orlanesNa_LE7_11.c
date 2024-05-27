/*=========================================================
FILENAME	:	orlanesNa_LE7_11.c
DESCRIPTION :	Create a program that extracts and adds the two least significant digits of an integer.
AUTHOR		:	Nathan John G. Orlanes
CREATED		:	18 November 2021
=========================================================*/

#include <stdio.h>
#define divisor 10

int extractFirstLSD (int num);
int extractSecondLSD (int num);
int sumDigits (int firstDigit, int secondDigit);


int main()
{
    int  num, firstDigit, secondDigit, sum;

    printf("Enter an integer: ");
    scanf ("%d", &num);

    firstDigit = extractFirstLSD(num);
    secondDigit = extractSecondLSD (num);
    sum = sumDigits(firstDigit, secondDigit);

    printf("\nThe sum of the two least significant numbers in the integer is %d.", sum);

    return 0;
}


int extractFirstLSD(int num)
{
    return(num % divisor);
    
}
int extractSecondLSD (int num)
{
    return(num / divisor)%divisor;
    
}

int sumDigits (int firstDigit, int secondDigit)
{
    return(firstDigit + secondDigit);
    
}

