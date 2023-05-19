#include<stdio.h>
#define min(a,b)((a<b)?a:b)
int main()
{
	int n,i,j,rowslimit,colslimit,printvalue;
	scanf("%d",&n);
	rowslimit=n*2-1;
	colslimit=rowslimit;
	for(i=1;i<=rowslimit;i++)
	{
		for(j=1;j<=colslimit;j++)
		{
			printvalue=min(min(i,rowslimit-i+1),min(j,colslimit-j+1));
			printf("%d ",n-printvalue+1);
		}
		printf("
");
	}
}