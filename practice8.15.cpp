#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a=rand()%90+10;
	printf("A:%d\n",a);
	int tensdigit=a/10;
	int onesdigit=a%10;
	if(onesdigit==tensdigit)
	printf("palindrome\n");
	if(onesdigit!=tensdigit)
	printf("Not A Palindrome\n");
	int sum=onesdigit+tensdigit;
	if(sum%2==0)
	printf("Even\n");
	if(sum%2!=0)
	printf("Odd\n");
	return 0;
}
