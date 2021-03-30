//without arguments without return value
//addition of two numbers
#include <stdio.h>
void mechanical();
int main(int argc, char **argv)
{
	mechanical();
	return 0;
}
void mechanical()
{
	int a,b;
	printf("Enter a,b values: ");
	scanf("%d%d",&a,&b);
	printf("%d",a+b);
}




