#include<stdio.h>
int main()
{
    int n,sum=0,n1;
    printf("Enter a number for sum of digits : ");
    scanf("%d",&n);
    while(n>0)
    {
         n1=n%10;
         printf("%d",n1);
         sum+=n1;
         n=n/10;
         if(n>0)
         {
            printf("+");
         }
    }
    printf(" = %d",sum);
    return 0;
}