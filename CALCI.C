#include<stdio.h>
#include<conio.h>
int main()
{
int choise,n1,n2,a;
printf("enter first number:");
scanf("%d",&n1);
printf("enter second number:");
scanf("%d",&n2);
printf("1.Addition\n2.subtract\n3.multiplication\n4.division\n");
printf("choose your operation:");
scanf("%d",&choise);
switch(choise)
{
case 1:
a=n1+n2;
printf("%d",a);
break;
case 2:
a=n1-n2;
printf("%d",a);
break;
case 3:
a=n1*n2;
printf("%d",a);
break;
case 4:
a=n1/n2;
printf("%d",a);
break;
default:
printf("invalid choise");
break;
}
getch();
return 0;
}
