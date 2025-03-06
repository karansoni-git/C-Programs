#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,d;
float c;
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);
c=sqrt(a);
d=pow(a,b);
printf("sqrt:%f and power of %d into %d:%d",c,a,b,d);
getch();
return 0;
}
