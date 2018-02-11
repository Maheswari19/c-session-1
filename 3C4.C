
#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	printf("enter age:");
	scanf("%d",&age);
	if((age>=18)&&(age<30))
	{
		printf("u r eligible to vote %d",age);
		exit(0);
	 }
	 else
	 {
		goto c;
	 }
	 c:
	 printf("not valid");
	 getch();

}