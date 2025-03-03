#include<stdio.h>
#include<conio.h>
int main()
{
int n,r,s=0,c;
printf("enter number:");//153=1*1*1+5*5*5+3*3*3=153 is armstrongnumber
scanf("%d",&n);
c=n;
while(n>0)
{
r=n%10;
s=(r*r*r)+s;
n=n/10;
}
if(c==s)
printf("armstrong number");
else
printf("not armstrong");
getch();
return 0;
}


