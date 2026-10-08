#include <stdio.h>

int main()

{
    int age;
    printf("Enter you age :");
    scanf("%d", &age); //address-of operator &

    printf("Your age is : %d", age);
    return 0;
}
