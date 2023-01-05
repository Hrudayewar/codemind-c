#include<stdio.h>
#include<math.h>
int main()
{
int num,temp;
int sum=0,digit_count=0,pd;
scanf("%d",&num);
temp=num;
while(temp!=0)
{
	temp=temp/10;
	digit_count++;
}
temp=num;
while(temp!=0)
{
	pd=temp%10;
	sum=sum+pow(pd,digit_count);
	temp=temp/10;
	digit_count--;
}
if(sum==num)
{
	printf("True");
}
else
{
	printf("False");
}			
}