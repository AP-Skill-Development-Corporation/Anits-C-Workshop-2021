//with arguments without return value
//addition of two numbers
#include <stdio.h>
void addition(int a,int b);
int main(int argc, char **argv)
{
	int a,b;
	printf("Enter a,b values: ");
	scanf("%d%d",&a,&b);
	addition(a,b);
	return 0;
}
void addition(int a,int b)
{
	printf("%d",a+b);
}
