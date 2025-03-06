#include<stdio.h>
#include<conio.h>
int main()
{
int a=5;
int *b;
b=&a;
printf("value of a is %d\n",a);
printf("address of a is %u\n",&a);
printf("address of b is %u\n",&b);
printf("value store in *b of a is %u\n",*b);
getch();
return 0;
}
