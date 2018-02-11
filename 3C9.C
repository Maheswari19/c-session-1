#include<stdio.h>
#include<conio.h>
void main()
{
	int tot_min,tot_hr,min;
	printf("Enter miutes:");
	scanf("%d",&min);
	tot_hr=min/60;
	tot_min=min%60;
	printf("no.of hrs %d and minutes %d",tot_hr,tot_min);
	getch();
}
