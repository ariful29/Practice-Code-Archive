#include<stdio.h>
int main()
{
    double gpa;
    printf("Enter your gpa: \n ");
    scanf("%lf", &gpa);

    if(gpa<5)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;

}
