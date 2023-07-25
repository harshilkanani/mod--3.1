#include<stdio.h>
int main()
{
	float pi=3.14;
	float r=5;
	float a;
	{
		printf("value of pi is %f\n",pi);
		printf("value of r is %f\n",r);
		
		a=pi*r*r;
		printf("answer is a %f\n",a);
	}
	return 0;
}