#include<stdio.h>
int main()
{
    float commission,sales;
    printf("Enter Sales Amount ");
    scanf("%f",&sales);
    if(sales<=500)
    {
        commission=sales/20;
    }
    else if(sales>500 && sales<=2000)
    {
        commission=35+(sales/10);
    }
    else if(sales>2000 && sales<=5000)
    {
        commission=185+((sales*12)/100);
    }
    else
    {
        commission=((sales*12.5)/100);
    }
    printf("%.2f",commission);
}