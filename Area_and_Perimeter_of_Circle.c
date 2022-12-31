#include<stdio.h>
int main()
{
   
    float radius,area,perimeter;
    scanf("%f",&radius);
    area=3.14*radius*radius;
    perimeter=2*3.14*radius;
    printf("%.2f
%.2f",area,perimeter);
}
