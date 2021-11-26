#include<stdio.h>
int main()
{
    double age;
    printf("Enter your age: \n");
    scanf("%lf", &age);

    if(age >= 18)
    {
        printf("Congratulaition!!! You are eligible to open bank account. \n");
    }
    else{
        printf("Sorry. You are not eligible to open bank account.\n");
    }
    return 0;
}
