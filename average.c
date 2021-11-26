#include<stdio.h>
int main()
{
    double physics=65, math=83.50, c=85.75, english=67.50, average;
    average = (physics + math + c + english) / 4;

    printf("%.2lf", average);
    return 0;
}
