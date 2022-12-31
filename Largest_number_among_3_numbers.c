#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("%.2ld",a);
    }
    if(b>=a && b>=c)
    {
        printf("%.2ld",b);
    }
    if(c>=a && c>=b)
    {
        printf("%.2ld",c);
    }   
}