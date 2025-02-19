#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e,f,g;
printf("enter a and b:");
scanf("%d%d",&a,&b);
c=a+b;
d=a-b;
e=a*b;
f=a/b;
g=a%b;
printf("addition:%d\nsubtraction:%d\nmultiplication:%d\ndivison:%d\nmodulus:%d",c,d,e,f,g);
getch();
return 0;
}
