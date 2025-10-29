#include<stdio.h>
int main()
{
    int num,a,b=0;
    printf("Enter Your Number of Term ");
    scanf("%d",&num);
    for(a=1;a<=num;a++)
    {
        b=b+2;
        printf("%d,",b);
    }
}