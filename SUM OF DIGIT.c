#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0,div,c;
	printf("enter a number:");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		div=n%10;
		sum=sum+div;
		n=n/10;
	}
	printf("sum of %d digits:%d",c,sum);
	getch();
	return 0;
}
