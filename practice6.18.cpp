#include<stdio.h>
int main()
{
	unsigned int x;
	printf("enter the unsigned int:");
	scanf("%d",&x);
	int sum=x&240;
	printf("selected value:%d\n",sum);
	return 0;
	
}
