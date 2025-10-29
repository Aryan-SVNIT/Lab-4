#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter Your Number ");
    scanf("%d",&a);
    c=c+a;
    for(int i=1;;i++)
    {
        printf("Enter Your next Number ");
        scanf("%d",&b);
        if(b>=0)
        {
            c=c+b;
        }
        else
        {
            printf("You entered Negative Number\n");
            break;
        }
    }
    printf("Sum of Positive Number is %d",c);
}