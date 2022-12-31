#include<stdio.h>
int main()
{
    int minutes,hours;
    scanf("%d",&minutes);
    hours=minutes/60;
    minutes=minutes%60;
    printf("%d Hour(s) %d Minute(s)",hours,minutes);
}