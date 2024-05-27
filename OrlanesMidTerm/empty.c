#include <stdio.h>
#include <stdlib.h>

int factorial(int x)
{
    if(x>=1)
    {
        return x * factorial(x-1);
    }
    else
    {
        return 1;
    }
}
