//this is an example of call by value.
#include<stdio.h>
#include<conio.h>
int chg(int a,int b)
{
	a=20;
	b=10;
}
int main()
{
	int a=10,b=20;
	chg(a,b);
	printf("%d %d",a,b);
	getch();
	return 0;
}
/*here value of actual parameter will be copied to formal parameter and these two different 
parameter store values in different locations.
here in call by value we use formal parameter for calling actual parameters this formal parameter
is local variable which will destroy after end of function
it will not affect actual variable values it only perform operations on local varible.*/
