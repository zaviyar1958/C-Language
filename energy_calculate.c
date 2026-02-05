#include<stdio.h>
int main()
{
    int e,m,a,h,v;
    
    // taking input from user

    printf("Enter mass : ");
    scanf("%d",&m);
    printf("Enter accelration : ");
    scanf("%d",&a);
    printf("Enter height : ");
    scanf("%d",&h);
    printf("Enter velocity : ");
    scanf("%d",&v);

    // doing claculation using formula 

    e=m*(a*h+v/2);

    // printing the output 

    printf("Energy = %d",e);
    return 0;
}