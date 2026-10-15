
#include<stdio.h>
int main()
{
int a,b,temp=0;
printf("enter the 1st number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("swapped numbers are:%d %d",a,b);
return 0;
}
