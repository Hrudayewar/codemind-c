#include<stdio.h>
int main()
{
    int a,b,c,d,e,k;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    k=(a+b+c+d+e)*0.2;
    if(k>=90)
    {
        printf("Grade A");
    }
    else if(k>=80)
    {
        printf("Grade B") ;
    } 
    else if(k>=70)
    {
        printf("Grade C");
    }
    else if(k>=60)
    {
      printf("Grade D");
      }
        else if(k>=40)
        {
            printf("Grade E");
        }
        else
        {
            printf("Grade F");
        }

}