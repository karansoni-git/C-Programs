#include<stdio.h>
#include<conio.h>
struct books
{
	char name[20];
	char author[20];
	int price;
};
int main()
{
	struct books b1;
//	b1.name="database managements";
//	b1.author="karan sonii";
	b1.price=2000;
//	printf("name of the books:%c",b1.name);
//	printf("author of the books:%c",b1.author);
	printf("price of the books:%d",b1.price);
	getch();
	return 0;
}
