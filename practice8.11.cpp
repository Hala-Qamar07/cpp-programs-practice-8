#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int x=rand()%90+10;
	printf("N:%d\n",x);
	int firstdigit=x/10;
	int seconddigit=x%10;
	int sum=firstdigit+seconddigit;
	printf("sum:%d\n",sum);
	return 0;
	
}
