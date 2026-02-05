#include<stdio.h>
int main()
{
    int unit;
    float charge;
    printf("Enter unit used : ");
    scanf("%d",&unit);
    if(unit<=0)
    {
        printf("Invalid input.");
    }
    else if(unit>=1 && unit<=50)
    {
        charge=0.5*unit;
        printf("Electricity charge is %f",charge);
    }
    else if(unit>=51 && unit<=150)
    {
        charge=0.75*unit;
        printf("Electricity charge is %f",charge);
    }
    else if(unit>=151 && unit<=250)
    {
        charge=1.2*unit;
        printf("Electricity  charge is %f",charge);
    }
    else if(unit>=251)
    {
        charge=1.5*unit;
        printf("Electricity charge is %f",charge);
    }
    return 0;
}