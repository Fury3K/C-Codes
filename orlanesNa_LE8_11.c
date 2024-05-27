/* ======================================================
FILENAME    :   orlanesNa_8_11.c
DESCRIPTION :   Create a program that sets up an array called days, which contains pointers to the names of the days of the week 
                and return the name of the day from the given day. 
                The function accepts the given day.
AUTHOR      :   Nathan John G. Orlanes
CREATED     :   02 December 2021
======================================================= */

#include <stdio.h>

int day (int numDay);
int main()
{
    int numDay;
    char *days[7];

    printf("Enter Day:  ");
    scanf("%d", &numDay);

    day(numDay);

    return 0;
}
int day (int numDay)
{
char *days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}; 

    if(numDay < 1 || numDay > 7)
    {
        printf("INVALID");
        return;
    }
    else
    {
        printf("Day of the Week:  %s\n", days[numDay-1]);
        return;
    }
}