#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter number of lines to be printed : ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==n || i==2*n-1)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}