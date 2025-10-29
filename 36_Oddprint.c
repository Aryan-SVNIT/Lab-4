#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter YOUR Number of TERM ");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        b=2*a-1;
        printf("%d,",b);
    }
}