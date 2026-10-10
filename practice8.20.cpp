#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int year=rand()%201+1900;
	printf("Year:%d\n",year);
	if(year%4==0 && year%100!=0 || year%400==0)
	printf("Leap Year");
	else
	printf("Not A Leap Year");
	return 0;
	
	
	
}
