#include<stdio.h>
int main()
{
    int n,i,t;
    printf("Enter a number for multiplication table : ");
    scanf("%d",&n);
    printf("Multiplication table for %d is following.\n",n);
    for(i=1;i<=10;i++)
    {
        t=n*i;
        printf("%d\n",t);
    }
    return 0;
}