#include <stdio.h>

int main()

{
    float a;
    float b;
    float c;
    float average;
    printf("Enter the 1st num :");
    scanf("%f",&a);
    printf("Enter the 2nd num :");
    scanf("%f",&b);
    printf("Enter the 3rd num :");
    scanf("%f",&c);
    average = (a+b+c)/3;
    printf("The average is : %f", average);
    return 0;
}
