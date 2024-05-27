/*=========================================================
FILENAME	:	LE3_13orlanesNA.c
DESCRIPTION :	Program that prints the tuition for 2 semesters at ABC College.
AUTHOR		:	Nathan John G. Orlanes
CREATED		:	07 September 2021
=========================================================*/

#include <stdio.h>

int main ()
{
    const int regFee       = 450;
    const int unitFee      = 450;
    const int penaltyFee   = 2260;
    float firstSem, secondSem, totalFee, units1, units2;

    printf("Enter your # of units for First Semester: ");
    scanf("%f", &units1);

    printf("Enter your # of units for Second Semester: ");
    scanf("%f", &units2);

    firstSem = regFee + ((units1)/ 12* penaltyFee) + (units1 * unitFee);
    secondSem = regFee + ((units2)/ 12* penaltyFee) + (units2 * unitFee);
    totalFee = firstSem + secondSem; 

    printf("\nYour tuition fee for the two semester at ABC College is PHP %1.2f.", totalFee);

    return 0;
}
