#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int i,j,n,count=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
            {
                printf("%c ",n-i+1+64);
            }
        printf("
");
        }
    }