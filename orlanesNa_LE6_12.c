/*=========================================================
FILENAME	:	LE6_12orlanesNA.c
DESCRIPTION :	Ask a string and determine how many vowels and consonants.
AUTHOR		:	Nathan John G. Orlanes
CREATED		:	8 November 2021
=========================================================*/
#include <stdio.h>
int main()
{
    char s[100];  
    int i,vowels=0,consonants=0;
 
    printf("Enter  the string : ");
    gets(s);
     
    for(i=0;s[i];i++)  
    {   		
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		      vowels++;
            else
              consonants++;
 	}
 	  
    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",consonants);
    
    return 0;
}