#include<stdio.h>
int main()
{
    double marks;

    printf("Enter your math number: \n");
    scanf("%lf", &marks);

    if(marks<=100 && marks>=80)
    {
        printf("Grade is A+ \n");
    }
    else if(marks<=80 && marks>=70)
    {
        printf("Grade is A\n");
    }
    else if(marks <= 70 && marks >= 60)
    {
        printf("Grade is A-\n");
    }
    else if(marks <= 60 && marks >= 50)
    {
        printf("Grade is B\n");
    }
    else if(marks <= 50 && marks >= 40)
    {
        printf("Grade is C\n");
    }
    else if(marks <=40 && marks >=33)
    {
        printf("Grade is D\n");
    }
    else if(marks<33)
    {
        printf("You are failed bro");
    }
    return 0;
}
