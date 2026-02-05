#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("The given number is a even number.");
    }
    else
    {
        printf("The given number is an odd number.");
    }
    return 0;
}