#include<stdio.h>

int main()
{
    int sum=0, n, i;

    printf("Enter the end series limit: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("\nSum in a series from 1-%d is %d\n\n", n, sum);

    return 0;
}
