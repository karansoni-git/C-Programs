#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str1[]="karan ";
	char str2[]="soni ";
	char str3[20];
	//strcpy(destination,source);
	//in strcpy source character will copy and paste it into destination.
//	strcpy(str1,str2);//soni copied and pasted into str1. 
//	printf("%s",str1);
//	strcpy(str3,"hello all this is a new line");//here we can also add new text to string variable.
//	printf("%s",str3);

	//strcat() function concate two string.
//	strcat(str1,str2);
//	printf("%s",str1);//here concatenated string is str1 not str2.
	
	/*strncat() is similar to the strcat() but in this function u can pass number of character 
	that you want to concatenate*/
//	strncat(str1,str2,1);
//	printf("%s",str1);

	//strchr( ) function returns pointer to the first occurrence of the character in a given string
//	char r='r';
//	char *l=strchr(str1,r);
//	printf("%s",l);

	//strchr() comparing string by ascii value
//	char s1[10];
//	char s2[10];
//	fgets(s1,sizeof(s1),stdin);
//	fgets(s2,sizeof(s2),stdin);
//	puts(s1);
//	puts(s2);
//	int result=strcmp(s1,s2);
//	if(result==0)//0 for equal
//	printf("strings are equal");
//	if(result>0)//1 for first string is greater in ascii value
//	printf("first string is greater");
//	if(result<0)//-1 for second string is greater in ascii value
//	printf("second string is greater");

	//strspn()
//	char a[]="karan";
//	char b[]="knimul";
//	int l;
//	l=strspn(a,b);
//	printf("answer:%d",l);

	getch();
	return 0;
}
