#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d",&a,&b,&c);
    d=a+b;
    e=b+c;
    f=a+c;
    if(d>e && d>f)
    {
        printf("%d",d);
    }
    else if(e>f)
    {
        printf("%d",e);
    }
    else
    {
        printf("%d",f);
    }
}