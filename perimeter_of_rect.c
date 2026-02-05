#include<stdio.h>
int main()
{
    int x,y,p;

    // taking input from the user

    printf("Enter length of rectangle : ");
    scanf("%d",&x);
    printf("Enter width of rectangle : ");
    scanf("%d",&y);

    // calculating the parimeter 

    p=2*(x+y);

    // printing the output  

    printf("Parimeter of rectangle is %d",p);
    return 0;
}