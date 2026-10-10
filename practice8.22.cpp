
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a=rand()%99+1, b=rand()%99+1;
	printf("A:%d\n B:%d\n",a,b);
	if(a%2==0 && b%2==0)
	printf("both even\n");
	else if(a%2!=0 && b%2!=0)
	printf("both odd\n");
	else 
	printf("one even ,one odd\n");
	int sum=a+b;
	if(sum%5==0)
	printf("sum is dividible by 5\n");
	else
	printf("sum is not divisible by 5\n");
	return 0;
}
