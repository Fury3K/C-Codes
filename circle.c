#include<stdio.h>

#define PI 3.14159
int main()
{
    float R, area;
    for(R=1; R<=5; R++)
    {
        area = R*R*PI;
        printf("R = %.1f\t\tArea = %.3f\n", R, area);
    }

    /*R=1;
    while(R<=5)
    {
        area = R*R*PI;
        printf("R = %.1f\t\tArea = %.3f\n", R, area);
        R++;
    }*/

    /*R=1;
    do {
        area = R*R*PI;
        printf("R = %.1f\t\tArea = %.3f\n", R, area);
        R++;
    }while(R<=5);*/

    return 0;
}
