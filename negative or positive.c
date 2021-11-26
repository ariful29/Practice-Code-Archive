#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number to check: ");
    scanf("%d", &num);

    if(num > 0)
        printf("%d is a positive number \n", num);
    else if (num < 0)
        printf("%d is a negative number \n", num);
    else
        printf("0 is neither positive or negative number \n");

    return 0;
}
