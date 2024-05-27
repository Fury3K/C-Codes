/*=========================================================
FILENAME	:	LE3_12orlanesNA.c
DESCRIPTION :	Program  that extracts and adds the two least significant digits of an integer.
AUTHOR		:	Nathan John G. Orlanes
CREATED		:	07 September 2021
=========================================================*/

#include<stdio.h>
int main()
{
    int num;
    int firstDigit;
    int secondDigit;
    int sum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    firstDigit = (num%10);
    secondDigit = (num/10)%10;
    sum = firstDigit + secondDigit;

    printf("\nThe sum of the two least significant numbers in the integer is %d.", sum);

    return 0;
}