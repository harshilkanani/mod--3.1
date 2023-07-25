#include<stdio.h>
int main()
{
	int num;
	printf("enter the number :");
	scanf("%d",&num);
	if(num%4 ==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not leap year");
	}
	return 0;
}