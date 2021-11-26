#include<stdio.h>
int main()
{
    int rank;
    printf("Enter a rank number (1-5) : \n");
    scanf("%d", &rank);

    if(rank ==1)
    {
        printf("Your salary is 250,000 BDT\n");
    }
    else if(rank ==2)
    {
        printf("Your salary is 200,000 BDT\n");
    }
    else if(rank ==3)
    {
        printf("Your salary is 180,000 BDT\n");
    }
    else if(rank ==4)
    {
        printf("Your salary is 150,000 BDT\n");
    }
    else if(rank ==5)
    {
        printf("Your salary is 100,000 BDT\n");
    }
    return 0;
}
