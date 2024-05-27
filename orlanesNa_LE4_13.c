/*======================================================
FILENAME    :orlanesNa_4.13.c
DESCRIPTION :Program that determines a student’s final grade and indicate whether it is passing or failing
AUTHOR      :Nathan John G. Orlanes
CREATED     :September 17, 2021
=======================================================*/

#include <stdio.h> 
#define divisor 4

int main()
{
    float firstMark, secondMark, thirdMark, fourthMark, sum, finalGrade;

    printf("Enter your First Mark:  ");
    scanf("%f", &firstMark); 

    printf("Enter your Second Mark: ");
    scanf("%f", &secondMark); 

    printf("Enter your Third Mark:  ");
    scanf("%f", &thirdMark); 

    printf("Enter your Fourth Mark: ");
    scanf("%f", &fourthMark); 

    if(firstMark >=0 && firstMark <=100 && secondMark >=0 && secondMark <=100 && thirdMark >=0 && thirdMark <=100 && fourthMark >=0 && fourthMark <=100)
    {
        sum = firstMark + secondMark + thirdMark + fourthMark;
        finalGrade = sum / divisor;
        printf("\nYour final grade is %.2f.", finalGrade);

        if(finalGrade >= 50)
        printf("\n You have PASSED!");
        else
        printf("\n You have FAILED!");
    }
    else
    {
        printf("\nYour input is INVALID!");
    }
    
    return 0;  

}