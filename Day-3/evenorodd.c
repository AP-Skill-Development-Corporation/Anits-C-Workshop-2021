// to check the value is even or odd
#include <stdio.h>
int main(int argc, char **argv)
{
	int k;
	printf("Enter K value");
	scanf("%d",&k);
	if(k%2==0)
	{
		printf("The entered value is even number");
	}
	else
	{
		printf("The entered value is odd number");
	}
	return 0;
}

