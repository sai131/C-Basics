#include<stdio.h>
void main()
{
	int a, hours, minutes;
	printf("Enter the minutes");
	scanf("%d",&a);
	hours=a/60;
	minutes=a%60;
	printf("hours and minutes is%d hours %d minutes",hours,minutes); 
}
