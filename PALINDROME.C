#include<stdio.h>
#include<conio.h>
int main()
{
/*palindrome number means the number which is equal to there reverse
ex.131= reverse 131 */
int n,r,c,sum=0;
printf("enter a number:");
scanf("%d",&n);
c=n;
while(n>0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(c==sum)
printf("\npalindrome");
else
printf("\nnot palindrome");
getch();
return 0;
}
