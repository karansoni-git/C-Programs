#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int *x;
x=(int *)malloc(sizeof(int));
printf("enter the value:");
scanf("%d",&x);
printf("value of x:%d",x);
getch();
return 0;
}
