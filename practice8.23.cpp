#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a=rand()%90+10, b=rand()%90+10;
	printf("A:%d\n B:%d\n",a,b);
	 int firstdigita=a/10;
	 int seconddigita=a%10;
	 int firstdigitb=b/10;
	 int seconddigitb=b%10;
	 if(firstdigita==seconddigitb&&firstdigitb==seconddigita||firstdigitb==seconddigita&&firstdigita==seconddigitb)
	printf("same digits,possibly reordered");
	else
	printf("different digits");
	return 0;
}
	


	
