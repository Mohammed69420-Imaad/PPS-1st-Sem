#include <stdio.h>
int main()
{
    float marks;
    printf ("Enter marks (0-100):");
    scanf("%f", & marks);
    if (marks <0 || marks > 100)
    {
        printf ("invalid marks .\n");
    }
    else if (marks < 40)
    {
        printf ("results: Fail\n");
        printf("grade: F\n");
    }
    else if (marks >=90)
    {
        printf("results: Pass\n");
        printf("grade: A+");
    }
    else if (marks >=80)
    {
        printf("results: Pass\n");
        printf("grade: A\n");
    }
    else if (marks >= 70)
    {
        printf("results: Pass\n");
        printf("grade: B+");
    }
    else if (marks>=60)
    {
        printf("results: Pass\n");
        printf("grade: B\n");
    }
    else if (marks >=50)
    {
        printf("results: Pass\n");
        printf("grade: C\n");
    }
    else
    {
        printf("reault: Pass\n");
        printf("grade: C\n");
    }
    return 0;
}
