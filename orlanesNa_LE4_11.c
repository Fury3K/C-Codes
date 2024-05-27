/*======================================================================
 FINALNAME  : orlanesNa_LE4_11.c
 DESCRIPTION: Determine whether the letter entered by the user is vowel or consonant.
              For all other combinations, there are two roots.     
 AUTHOR     : Nathan John G. Orlanes
 CREATED    : 17 September 2021
========================================================================*/

#include <stdio.h>

int main()
{
    char chara;

    printf("Please enter a character:   ");
    scanf("%c", &chara);

    if(chara == 'a' || chara == 'e' || chara == 'i' || chara == 'o' || chara == 'u' || 
    chara == 'A' || chara == 'E' || chara == 'I' || chara == 'O' || chara == 'U')
    printf("Vowel!");
    else
    { 
        if(chara == 'b' || chara == 'B' || chara == 'c' || chara == 'C' || chara == 'd' || chara == 'D' || chara == 'f' || chara == 'F' || chara == 'g' || chara == 'G' || chara == 'h' || chara == 'H' ||
         chara == 'j' || chara == 'J' || chara == 'k' || chara == 'K' || chara == 'l' || chara == 'L' || chara == 'm' || chara == 'M' || chara == 'n' || chara == 'N' || chara == 'p' || chara == 'P' ||
         chara == 'q' || chara == 'Q' || chara == 'r' || chara == 'R' || chara == 's' || chara == 'S' || chara == 't' || chara == 'T' || chara == 'v' || chara == 'V' || chara == 'w' || chara == 'W' ||
        chara == 'x' || chara == 'X' || chara == 'y' || chara == 'Y' || chara == 'z' || chara == 'Z')
        printf("Consonant!", chara); 

        else
        printf("INVALID INPUT!", chara);
    }
    return 0;

}