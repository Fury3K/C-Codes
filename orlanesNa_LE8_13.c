/* ======================================================
FILENAME    :	orlanesNa_8_13.c
DESCRIPTION :	Create a program that determine and returns the maximum number in an array of integers using pointers. 
            	The function accepts the starting address of the array and number of entries.
AUTHOR      :	Nathan John G. Orlanes
CREATED     :	02 December 2021
======================================================= */

#include <stdio.h>
#include <stdio.h>

int maxNumber(int *arr, int entr); 
int main()
{
	int entr, arr[100], num, max; 
	
	printf("Enter number of entries: ");
	scanf("%d", &entr);
	
	for(num = 0; num < entr; num++)
    {
		printf("Enter number: ");
		scanf("%d", &arr[num]);
	}
	
	max = maxNumber(arr, entr);
	
	printf("\nMaximum number: %d", max);
	return 0;
} 
int maxNumber(int *arr, int entr)
{
	int num, maxNum = arr[0];
	
	for(num = 0; num < entr; num++)
    {
		if(maxNum < arr[num])
        {
			maxNum = arr[num];
		}
	}
	return maxNum;
}