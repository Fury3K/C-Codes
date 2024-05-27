/*=========================================================
FILENAME	:	LE6_13orlanesNA.c
DESCRIPTION :	Ask for 5 strings and display the longest string.
AUTHOR		:	Nathan John G. Orlanes
CREATED		:	8 November 2021
=========================================================*/
#include<stdio.h>
#include<string.h>

int main()
{
	char string[1000], lstring[1000];
	int cnt;
	
	printf("Enter 5 Strings/Word: \n");
	for(cnt = 0; cnt < 5; cnt++)
	{
		printf("String/Word %d: ", cnt + 1);
		gets(string);
		
		if(strlen(string) > strlen(lstring))
		{
			strcpy(lstring, string);
		}
	}
	printf("\nThe longest string is: %s", lstring);
	
	return 0 ;
}
