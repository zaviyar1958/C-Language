#include<stdio.h>
int main()
{
    int days;
    float fine;
    printf("Enter number of days late : ");
    scanf("%d",&days);
    if(days>=1 && days<=5)
    {
        fine=days*0.5;
        printf("Fine is %f",fine);
    }
    else if(days>=6 && days<=10)
    {
        fine=days*1.00;
        printf("Fine is %f",fine);
    }
    else if(days>=11 && days<=30)
    {
        fine=days*5.00;
        printf("Fine is %f",fine);
    }
    else if(days>=30)
    {
        printf("Your membership will be canceled.");
    }
    return 0;
}