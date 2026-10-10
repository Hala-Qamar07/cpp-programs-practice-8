#include<stdio.h>
int main()
{

int i='a';
while(i<='z')
{
	if(i=='a' || i=='e' || i=='i' ||i=='o' ||i=='u')
	printf("%c, %d\n",i,i);
	i=i+1;

}
return 0;
}
