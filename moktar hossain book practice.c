#include<stdio.h>
int main()
{
    int year;
    int rem4, rem100, rem400;
    printf("Enter the year to be tested: '\n");
    scanf("%d", &year);

    rem4 = year%4;
    rem100 = year%100;
    rem400 = year%400;

    if((rem4==0 && rem100 == !0) || rem4 ==0)
        printf("%d\n is a leap year.", year);
    else
        printf("%d'\n is not a leap year.", year);

        return 0;
}
