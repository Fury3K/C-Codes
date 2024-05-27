/*=========================================================
FILENAME	:	LE3_11orlanesNA.c
DESCRIPTION :	Program that asks for user’s yearly pay and displays his weekly pay.
AUTHOR		:	Nathan John G. Orlanes
CREATED		:	07 September 2021
=========================================================*/

#include <stdio.h>

int main()
{
    int x[10], smallest = 0, largest = 0, count, i;

    for (count = 0; count < 10; count++)
    {
    printf("Enter array number %d: ", count + 1);
    scanf("%d", &x[count]);
    }
    printf("\nThe numbers are: ");
    for(count = 0; count < 10; count++)
    {
        printf("%d ", x[count]);
    }
    smallest= x[0];
    largest= x[0];

    for (count = 1; count < 10; count++)
    {
        if(x[count] < smallest)
        {
            smallest = x[count];
        }
        else if(x[count] > largest)
        {
            largest = x[count];
        }
    }
    printf("\nThe Largest number is: %d and The smallest number is: %d\n", largest, smallest);

    for (i=0; i<10; i++)
    {
        if(x[i]>largest)
        {
            largest = x[i];
        }
    }
      smallest = x[0];
       i=0;

      for(;i<9;i++)
      {
        if(smallest>x[i+1])
        {
            smallest=x[i+1];
        }
      }
    printf("\n The Largest Number is: %d", largest);
    printf("\n The Smallest Number is: %d", smallest);
    return 0;

    return 0;
}