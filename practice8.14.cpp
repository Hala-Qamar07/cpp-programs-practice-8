#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a=rand()%90+10,b=rand()%90+10;
	printf("A:%d\n B:%d\n",a,b);
	int firstdigita=a/10;
	int seconddigita=a%10;
	int suma=firstdigita+seconddigita;
	int firstdigitb=b/10;
	int seconddigitb=b%10;
	int sumb=firstdigitb+seconddigitb;
	if(suma==sumb)
	printf("Digit Sums Are Equal\n");
	if(suma!=sumb)
	printf("Didgit Sums Differ\n");
	if(firstdigita==firstdigitb)
	printf("Same Tens Digit\n");
	return 0;
}
