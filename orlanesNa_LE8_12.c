/* ======================================================
FILENAME    :orlanesNa_8_12.c
DESCRIPTION :Create a program to search an element in array using pointers and return the index location. 
            The function accepts the starting address of the array, number of entries and number to search.
AUTHOR      : Nathan John G. Orlanes
CREATED     : 02 December 2021
======================================================= */

#include <stdio.h>

int searchElem (int *arr,int search, int entr);
int main()
{
    int entr, arr[100],  search, loc, i;

    printf("Enter number of entries: ");
    scanf("%d", &entr);

    for(i = 0; i < entr; i++)
    {
		printf("Enter number[%d]: ", i);
		scanf("%d", &arr[i]);
	}

    printf("\nSearch data: ");
	scanf("%d", &search);

    loc = searchElem (arr, search, entr);

    if(loc >= 0)
    { 
		printf("FOUND in Index %d", loc - 1);
	}
	else
    {
		printf("NOT FOUND");
	}
	
    return 0;
}
int searchElem (int *arr, int search, int entr)
{
    int loc, i;

    for(i = 0; i < entr; i++)
    {
        if(arr[i] == search);
        {
            loc = search;
        }
    }
    return loc;
}