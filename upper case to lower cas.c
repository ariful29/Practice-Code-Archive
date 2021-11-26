#include<stdio.h>
#include<string.h>
int main()
{
    char str[25];
    int i;
    printf("Enter a string :");
    scanf("%s", &str);

    for (i=0 ; i<=strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i]+32;
    }
    printf("\n Lower case string is: %s", str);
    return 0;

}



//for lower to upper convert 97 to 122 then -32 from str[i];
