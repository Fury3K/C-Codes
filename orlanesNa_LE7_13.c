/* ======================================================
FILENAME    :orlanesNa_LE7_13.c
DESCRIPTION :Create a program that determines whether the letter entered by the user is vowel or consonant.
AUTHOR      :Nathan John G. Orlanes
CREATED     : November 18 2021
=======================================================*/

#include<stdio.h>
#include<math.h>

void displayMenu ();
int powerSolver (int number, int exponent);
int factorialSolver (int num);
int quadraticSolver (int a, int b, int c);
int firstRoot, secndRoot;
int main()
{
    int operation;
    int i = 0;

    void displayMenu();
    {
        printf ("\n Welcome to the MENU! \n");

        printf(" 1. Power Problem Solver \n 2. Factorial Problem Solver \n 3. Quadratic Equation Solver \n 4. EXIT \n");
    }

    do
    {
        printf ("\nPlease select an operation:    ");
    scanf("%d", &operation);

    if(operation == 1)
    {
        int i, Number, Exponent; 
        double Power = 1;
  
        printf("\n Please Enter any Number : ");
        scanf(" %d", &Number);

        printf("\n Please Enter the Exponent Value: ");
        scanf(" %d", &Exponent);
    
        for(i = 1; i <= Exponent; i++)
            {
  	        Power = Power * Number;
            }
  
             printf("\n The Final result of %d Power %d = %lf", Number, Exponent, Power);
        
    }

    if(operation == 2)
    {
        int c, n, f = 1;
 
        printf("Enter a number to calculate its factorial:");
        scanf("%d", &n);
        for (c = 1; c <= n; c++)
             f = f * c;
 
         printf("Factorial of %d = %d\n", n, f);
    }

    if(operation == 3)
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
        }
        else if (operation == 4)
        {
            i++;
        }
    }
    while (i != 1);
    return 0;

    int powerSolver (int number, int exponent);
    {
        int i, Number, Exponent; 
        double Power = 1;
        for(i = 1; i <= Exponent; i++)
            {
  	        Power = Power * Number;
            }
  
             printf("\n The Final result of %d Power %d = %lf", Number, Exponent, Power);
    }
    int factorialSolver (int num);
    {
        int c, n, f = 1;
        for (c = 1; c <= n; c++)
             f = f * c;
 
         printf("Factorial of %d = %d\n", n, f);
    }
    int quadraticSolver (int a, int b, int c);
    {
        float a, b, c, firstRoot, secondRoot, disc;
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
    }

}
    


    




