#include<stdio.h>

int main()
{
    int monthnumber;
    
    printf("Enter a number from 1-12: ");
    scanf("%d", &monthnumber);

    if(monthnumber >=0 && monthnumber <=13)
        if (monthnumber == 1 )
            printf("January");
        else if (monthnumber == 2 )
            printf("February");
        else if (monthnumber == 3 )
            printf("March");
        else if (monthnumber == 4)
            printf("April");
        else if (monthnumber == 5 )
            printf("May");
        else if (monthnumber == 6 )
            printf("June");
        else if (monthnumber == 7)
            printf("July");
        else if (monthnumber == 8 )
            printf("August");
        else if (monthnumber == 9 )
            printf("September");
        else if (monthnumber == 10 )
            printf("October");
        else if (monthnumber == 11 )
            printf("November");
        else if (monthnumber == 12 )
            printf("December");
    else 
        printf("Invalid input!");

    return 0;
}