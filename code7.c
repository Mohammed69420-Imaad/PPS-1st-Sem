#include <stdio.h>

int main()

{
    float a;
    float b;
    float c;
    float simple_interest;
    printf("Enter the Principle :");
    scanf("%f",&a);
    printf("Enter the Time :");
    scanf("%f",&b);
    printf("Enter the ROI :");
    scanf("%f",&c);
    simple_interest = (a+b+c)/100;
    printf("The simple interest is : %f", simple_interest);
    return 0;
}
