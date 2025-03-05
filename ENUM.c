//enumeration in c 
//enum is only store integer values
//enum is a user defined data type
#include<stdio.h>
#include<conio.h>
enum days{
	sunday,
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday
};
int main()
{
	enum days today;//user defined data type in enum
	today=wednesday;
	printf("%d",today);
	getch();
	return 0;
}
