#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int x=rand()%900+100;
	printf("N:%d\n",x);
	int hundreds=x/100;
	int tens=(x/10)%10;
	int ones=x%10;
	int largest;
	if(hundreds>=tens&&hundreds>=ones)
	largest=hundreds;
	else if(tens>=hundreds&&tens>=ones)
	largest=tens;
	else
	largest=ones;
	printf("largest digit: %d\n",largest);
	if(hundreds!=tens&&hundreds!=ones&&tens!=ones)
	printf("All digits are different\n");
	return 0;
}

