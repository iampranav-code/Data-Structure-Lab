#include<stdio.h>
int main()
{
int a[50],n,i,j,pos,item,ch,temp;
printf("enter the sze:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
do
{
printf("\n1.insert\n2.delete\n3.search");
printf("\n4.sort\n5.display\n6.exit\n");
scanf("%d",&ch);
switch(ch){
case 1:
printf("enter theposition and item:");
scanf("%d%d",&pos,&item);
for(i=0;i>pos;i--)
a[i]=a[i-1];
a[pos-1]=item;
n++;
break;
case 2:
printf("Enter the position:");
scanf("%d",&pos);
for(i=pos-1;i<n;i++)
a[i]=a[i+1];
n--;
break;
case 3:
printf("enter the item:");
scanf("%d",&item);
for(i=0;i<n;i++)
if(a[i]==item)
break;
if(i<n)
printf("found array position %d",i+1);
else
printf("not found");
break;
case 4:
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted");
case 5:
for(i=0;i<n;i++)
printf("%d",a[i]);
break;
case 6:
break;
default:
printf("invalid choice");
}
}while(ch!=6);
return 0;
}


