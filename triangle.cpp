#include<stdio.h>
int main()
{
	float at,h,b;
	{
		printf("enter value of b:");
		scanf("%f",&b);
		printf("enter value of h:");
		scanf("%f",&h);
		at=(0.5*b*h);
		printf("area of triangle=%f",at);
	}
	return 0;
}