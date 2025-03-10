#include<stdio.h>
#include<conio.h>
void sum(int,int);
int main()
{
int a,b;
sum(a,b);
getch();
return 0;
}
void sum(int x,int y)
{
int z;
printf("enter first value:");
scanf("%d",&x);
printf("enter second value:");
scanf("%d",&y);
z=x+y;
printf(" sum of two numbers is:%d",z);
}
