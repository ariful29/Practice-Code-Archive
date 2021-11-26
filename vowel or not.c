#include<stdio.h>
int main()
{
    char letter;
    printf("Enter a letter to check: \n");
    scanf("%c", &letter);

    if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        printf("This is a Vowel.");
    }
    else
    {
        printf("This is not Vowel.");
    }
}
