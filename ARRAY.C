#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],i;
printf("enter the numbers:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
printf("the numbers are:%d\n",a[i]);
}
getch();
return 0;
}
