#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number to check: \n");
    scanf("%d, %d", &number);

    if(number == 2)
    {
        printf("This is a even number.\n");
    }
    else
    {
        printf("This is a odd number");
    }
    return 0;
}

