//this is an example of call by reference.
#include<stdio.h>
#include<conio.h>
void fun(int *a,int *b)
{
	*a=20;
	*b=10;
}
int main()
{
	int a=10,b=20;
	printf("before function:\n");
	printf("a:%d b:%d",a,b);
	fun(&a,&b);
	printf("\nafter function:\n");
	printf("a:%d b:%d",a,b);
	getch();
	return 0;
}
/*here in call by reference both actual and formal parameter refers a same memory location.
that's why when we change a value in function which formal parameter store a address of actual 
variable.
instead of passing value we pass adddress*/
