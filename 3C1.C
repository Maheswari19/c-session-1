
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	int b;
	int c=0;
	int d=0;
	printf("enter a,b:\n");
	scanf("%d%d",&a,&b);
	c=((a+b)*(a+b));
	d=((a*a)+(b*b));
	printf("a+b=%d,a*b=%d,c=%d,d=%d",a+b,a*b,c,d);
	getch();
}