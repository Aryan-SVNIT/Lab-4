#include<stdio.h>
int main()
{
    int num,a,b;
    printf("Enter Your last term ");
    scanf("%d",&num);
    for(a=1;a<=(num);a++)
    {
        b=a*a;
        printf("%d,",b);
    }
    
}