#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a=rand()%10+1,b=rand()%10+1;
	printf("A:%d\n B:%d\n",a,b);
	if(a==b)
	printf("Equal");
	if(a>b)
	printf("A is greater");
	if(b>a)
	printf("B is greater");
	return 0;
}
