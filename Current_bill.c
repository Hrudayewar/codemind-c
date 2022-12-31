#include<stdio.h>
int main()
{
	int unit;
	float total,charge;
	scanf("%d",&unit);
	if(unit<=199)
	{
		total= (unit*1.20)+100;
		printf("%.2f",total);
	}
	else if(unit>=200 && unit<=400)
	{
		total=(unit*1.50)+100;
		printf("%.2f",total);
	}
	else if(unit>=400 && unit<=600)
	{
		total=(unit*1.80)+160;
		printf("%.2f",total);
	}else if(unit>=600)
	{
		total=(unit*2.0)+240;
		printf("%.2f",total);
	}
	
}