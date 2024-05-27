#include<stdio.h>
#include<conio.h>

int main()
{

    char ch;
    do{
        printf("\n[a] apple\n");
        printf("[b] banana\n");
        printf("[c] cherry\n");
        printf("Choice: ");
        scanf("%c", &ch); //ch = getche();
    }while(ch<'a' || ch>'c');//while(ch!='a' && ch!='b' && ch!='c');

    printf("\nGood selection!\n\n");

    return 0;


}
