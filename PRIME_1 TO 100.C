#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,c;
printf("prime numbers between 1 to 100:\n");
for(n=1;n<100;n++)
{
c=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
if(c==2)
{
printf("%d is prime\n",n);
}
}
getch();
return 0;
}
