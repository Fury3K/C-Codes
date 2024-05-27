#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Value for a: ");
    scanf("%d", &a);
    printf("Value for b: ");
    scanf("%d", &b);
    printf("Value for c: ");
    scanf("%d", &c);

    int *p = &a;
    int *q = &b;
    int *r = &c;

    printf("\nThe value of a is: %d", *p);
    printf("\nThe value of b is: %d", *q);
    printf("\nThe value of c is: %d", *r);

}