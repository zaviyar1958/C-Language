#include<stdio.h>
int main()
{
    int p=1,a,b,i;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter exponent : ");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        p*=a;
    }
    printf("%d power of %d is %d",b,a,p);
    return 0;
}