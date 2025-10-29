#include<stdio.h>
int main()
{
    float rate,unit;
    printf("Enter Sales Amount ");
    scanf("%f",&unit);
    if(unit>0 && unit<=200)
    {
        rate=unit*0.50;
    }
    else if(unit>200 && unit<=400)
    {
        rate=100+(unit*0.65);
    }
    else if(unit>400 && unit<=600)
    {
        rate=230+(unit*0.80);
    }
    else
    {
        rate=425+(unit*125);
    }
    printf("Amount to be paid by the Consumer %.2f",rate);
}