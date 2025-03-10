#include<stdio.h>
#include<conio.h>
void sum();
int main()
{
sum();
getch();
return 0;
}
void sum()
{
int a,b,c;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum is :%d",c);
}
