#include<stdio.h>
#include<conio.h>
void main()
{
	char name[10];
	char address[20];
	int age;
	float height;
	printf("enter name:\n");
	scanf("%s",&name);
	printf("enter address:\n");
	scanf("%s",&address);
	printf("enter age:\n");
	scanf("%d",&age);
	printf("enter height:\n");
	scanf("%f",&height);
	printf("name:%s\naddress:%s\nage:%d\nheight:%f",name,address,age,height);
	getch();


}