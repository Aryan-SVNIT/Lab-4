#include<stdio.h>
int main()
{
    int num,sum=0,a;
    printf("Enter Your number ");
    scanf("%d",&num);
    while(num>9)
    {
    while(num>0)
    {
        a=num%10 ;
        sum=sum+a;
        num=num/10;
    }
    num=sum;
    sum=0;
    }
    printf("sum of digit is %d",num);
}