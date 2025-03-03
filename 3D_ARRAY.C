#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3],i,j;
printf("enter element:\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
printf("2D Array:\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%d\t",a[i][j]);
	}
	printf("\n\n");
}
getch();
return 0;
}
