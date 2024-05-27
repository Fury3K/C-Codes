#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(; n>=0;)    //while(n>=0)
    {
        printf("Enter the number: ");
        scanf("%d", &n);
    }
    printf("Program Terminated\n\n\n");

    return 0;
}
