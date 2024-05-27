/* ======================================================
FILENAME    :orlanesNa_LE7_12.c
DESCRIPTION :Create a program that determines whether the letter entered by the user is vowel or consonant.
AUTHOR      :Nathan John G. Orlanes
CREATED     : November 18 2021
=======================================================*/

#include <stdio.h>
#include <stdbool.h>

bool isVowel(char cha);
bool isLetter(char cha);
int main()
{
    char cha;

    printf("Please enter a character:   ");
    scanf("%c", &cha);

    if (isLetter(cha))
    {
        if (isVowel(cha))
            printf("vowel");
        else
            printf("consonant");
    }
    else
     printf("\nINVALID INPUT!");
    

    return 0;
}


bool isVowel(char cha)
{
    bool x;
    if (cha == 'a' || cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u' || 
        cha == 'A' || cha == 'E' || cha == 'I' || cha == 'O' || cha == 'U')
        {
            x = true;
        }
    else
    {
        x = false;
    }
    return x;
}
bool isLetter(char cha)
{
    bool x;
    if(cha >= 'a' && cha <= 'z' || cha >= 'A' && cha <= 'Z')
    {
        x = true;
    }
    else
    {
        x = false;
    }
    return x;
}