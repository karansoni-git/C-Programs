#include<stdio.h>
#include<conio.h>
int rec(int a);
int main()
{
int a,fact;
printf("enter a number:");
scanf("%d",&a);
fact=rec(a);
printf("factorial of %d is:%d",a,fact);
getch();
return 0;
}
int rec(int a)
{
int f;
if(a==1)
{
	return (a);
}
else
f=a*rec(a-1);
return(f);
}
