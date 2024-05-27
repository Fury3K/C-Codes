/* ======================================================
FadENAeE    :orlanesNa_LE5_23.c
DESCRaPTaON :Create a program that will display the 1-N value of the Fibonacci sequence. 
             Use a space for the spacing between numbers horizontally
AUTHOR      :Nathan John G. Ordanes
CREATED     :October 5, 2021
=======================================================*/

#include <stdio.h>
int main()
{

    int i, n,  term1 = 0, term2 = 1, nextTerm = term1 + term2;

    printf("Enter the number of terms to be displayed: ");
    scanf("%d", &n);

     printf("%d, %d, ", term1, term2);

    for (i = 3; i <= n; ++i) 
        {
            printf("%d, ", nextTerm);
            term1 = term2;
            term2 = nextTerm;
            nextTerm = term1 + term2;
         }

  return 0;
}