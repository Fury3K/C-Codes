#include <stdio.h> 
#define div 4

int main()
{
    float frstMark, secMark, thMark, frthMark, sum, totalMark;

    printf("Enter your First Mark:  ");
    scanf("%f", &frstMark); 

    printf("Enter your Second Mark: ");
    scanf("%f", &secMark); 

    printf("Enter your Third Mark:  ");
    scanf("%f", &thMark); 

    printf("Enter your Fourth Mark: ");
    scanf("%f", &frthMark); 

    if(frstMark >=0 && frstMark <=100 && secMark >=0 && secMark <=100 && thMark >=0 && thMark <=100 && frthMark >=0 && frthMark <=100)
    {
        sum = frstMark + secMark + thMark + frthMark;
        totalMark = sum / div;
        printf("\nYour final grade is %.2f.", totalMark);

        if(totalMark >= 50)
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