#include<stdio.h>
int main ()
{
    int num,a=1;
    float sum=0,b;
    printf("Enter your last term ");
    scanf("%d",&num);
    for(b=1;b<=num;b++)
    {
        a=a*b;
        sum=sum+(b/a);
    }
    
        printf("%f",sum);
    

}