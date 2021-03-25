//Arthimetic Operators(+,-,*,/,%)
#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c,d,e,f,g;
	printf("Enter value of a");
	scanf("%d",&a);
	printf("Enter value of b");
	scanf("%d",&b);
	c=a+b;
	printf("Addition = %d\n",c);
	d=a-b;
	printf("Subtraction= %d\n",d);
	e=a*b;
	printf("Multiplication = %d\n",e);
	f=a/b;
	printf("Divison=%d\n",f);
	g=a%b;
	printf("Modulo Divison=%d",g);
	return 0;
}

