#include<stdio.h>
#include<conio.h>
int main()
{
	int a[]={5,2,8,12,7};
	int *b;
	b=a;  //if we point any pointer variable to an array dont use & sign.
	//here int bytes is 4 so every element's address of an array is increasing by 4 byts.
	printf("\naddress of a[0]:%d",a);  
	printf("\nvalue at a[0]:%d",a[0]);
	printf("\naddress of a[1]:%d",&a[1]);
	printf("\nvalue at a[1]:%d",a[1]);
	printf("\naddress of a[2]:%d",&a[2]);
	printf("\nvalue at a[2]:%d",a[2]);
	printf("\naddress of a[3]:%d",&a[3]);
	printf("\nvalue at a[3]:%d",a[3]);
	printf("\naddress of a[4]:%d",&a[4]);
	printf("\nvalue at a[4]:%d",a[4]);
	
	//printf("%p",a); //%p display address in hexacode.
	printf("\n\n");
	printf("value at b:%d",b);// b stored address of first element of an array
	printf("\naddress of b:%d",&b);
	printf("\nvalue in the address that stored b:%d",*b);
	b[0]=3;//overwriting first element of an array
	printf("\nnew value of b[0]:%d",b[0]);
	 
	getch();
	return 0;
}
