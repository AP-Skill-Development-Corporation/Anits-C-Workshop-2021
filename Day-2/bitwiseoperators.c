//Bit wise operators
#include <stdio.h>
int main(int argc, char **argv)
{
	int a,b;
	printf("Enter a value");
	scanf("%d",&a);
	printf("Enter b value");
	scanf("%d",&b);
	printf("Bitwise and =%d\n",a&b);
	printf("Bitwise or = %d\n",a|b);
	printf("Bitwise right shift=%d\n",a>>1);
	printf("Bitwise left shift=%d",a<<1);
	return 0;
}

