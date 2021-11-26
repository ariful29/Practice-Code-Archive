#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Enter 3 number to check the maximum: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if( a>b && a<c )
    {
        printf("Max is : A\n");
    }
    else if(b>c)
    {
        printf("Max is B\n");
    }
    else
    {
        printf("Max is C\n");
    }
    return 0;

}
