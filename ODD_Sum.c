#include<stdio.h>
int main()
{
 int arr[100], i, n, esum=0, osum=0;
 scanf("%d", &n);
 for(i=0;i< n;i++)
 {
  scanf("%d",&arr[i]);
 }
for(i=0;i< n;i++)
 {
  if(arr[i]%2==0)
  {
   esum = esum + arr[i];
  }
  else
  {
   osum = osum + arr[i];
  }
  }
 printf("%d",osum);
}