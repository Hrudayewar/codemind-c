#include<stdio.h>
int main()
{
    float bs,hra,df,pf,gs;
    scanf("%f %f %f",&bs,&hra,&df);
    pf=(bs*12)/100;
    gs=bs+hra+df+pf;
    printf("%.2f
%.2f",pf,gs);
}