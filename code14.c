#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Cost price: ");
    scanf("%d", &a);
    printf("Enter Selling price: ");
    scanf("%d", &b);
    if(a>b && a>c)
    {
        printf("Loss");

    }
    else
    {
        printf("Profit");
    }
    return 0;
}
