#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a=rand()%90+10,b=rand()%90+10,c=rand()%90+10;
	printf("A:%d\n B:%d\n C:%d\n",a,b,c);
	if(a>b)
	{
		if(b>c)
		printf("c,b,a");
		else if(a>c)
		printf("a,c,b");
	}
	else
	{
		if(a<c)
		printf("b,a,c");
		else if(b>c)
		printf("b,c,a");
		else
		printf("c,b,a");
		}
	return 0;
}
