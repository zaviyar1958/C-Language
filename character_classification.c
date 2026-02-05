#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("The given character is a small letter alphabet.");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("The given character is a capital letter alphabet.");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("The given chatacter is a digit.");
    }
    else
    {
        printf("The given character is a special chatacter.");
    }
    return 0;
}