#include<stdio.h>
int main()
{
    int n,n1,sum=0,temp;
    printf("Enter number for sum of digit : ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        n1=n%10;
        sum+=n1;
        n=n/10;
    }
    n=temp;
    printf("The sum of digits of %d is %d",n,sum);
    return 0;
}