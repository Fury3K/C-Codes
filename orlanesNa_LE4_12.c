/*======================================================================
 FINALNAME  : orlanesNa_LE4_12.c
 DESCRIPTION: Compute the real roots of a quadratic equation . The roots 
              can be calculated using the following formulas: . It will 
              prompt the user to enter the constants (a, b, c) and 
              display the roots based on the following rules:
              If both a and b are zero, there is no solution
              If a is zero, there is only one root (-c/b).
              If the discriminate (b2-4ac) is negative, there are no real 
              roots
              For all other combinations, there are two roots.     
 AUTHOR     : Nathan John G. Orlanes
 CREATED    : 17 September 2021
========================================================================*/

#include <stdio.h>
#include <math.h> 

int main ()
{
    float a, b, c, firstRoot, secondRoot, disc;
    printf("Enter a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    disc = (b * b) - (4 * a * c);

    if(a == 0 && b == 0)
    {
        printf("There is no solution.");
    }
    else if(a == 0) 
    {
        firstRoot = (-c / b);
        printf("firstRoot = %.3f", firstRoot);
        printf("\nThere is only one root", firstRoot);
    }
    else if(disc < 0)
    {
        printf("\nThere are no real roots.");
    }
    else
    { 
        firstRoot = (-b - sqrt(disc)) / (2 * a);
        secondRoot = (-b + sqrt(disc)) / (2 * a);
        printf("firstRoot = %.3f and secondRoot = %.3f", firstRoot, secondRoot);
        printf("\nThere are two roots.", firstRoot, secondRoot);
    }
    return 0;
}