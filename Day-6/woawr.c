//without arguments with return values
//addition of two numbers
#include <stdio.h>
int anits();
int main(int argc, char **argv)
{
	int result;
	result=anits();
	printf("%d",result);
	return 0;
}
int anits()
{
	int a,b;
	printf("Enter a,b values: ");
	scanf("%d%d",&a,&b);
	return a+b;
}
