#include<stdio.h>

int main()
{
    int n, i;

    printf("Enter the end series limit: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        //check if number is odd
        if((i%2) ==0)
        {
            printf("%d  ", i);
        }
    }

    printf("\n\n\n");
    return 0;
}
