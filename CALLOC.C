#include<stdio.h>
#include<stdlib.h> //calloc function is contain in stdlib.h
#include<conio.h>
int main()
{
int *x;
int i;
x=(int *)calloc(5,sizeof(int));
*x=10;
*(x+0)=20; //overwriting the value of *x
*(x+1)=12;
*(x+2)=15;
*(x+3)=21;
*(x+4)=25;
printf("value store at x+1:%d",*(x+1));
printf("\naddress of x+1:%d",x+1);
printf("\n%d",*x);
printf("\n%d",*(x+0));
getch();
return 0;
}
