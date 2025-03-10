#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("enter a number:");
	scanf("%d",&n);
	printf("Table Of %d:\n",n);
	for(i=1;i<=10;i++)
	{
		printf("%d   %d   %d\n",n,i,(n*i));
	}
	getch();
	return 0;
}
