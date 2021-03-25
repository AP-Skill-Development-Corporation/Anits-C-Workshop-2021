//to check value is positive or negitive or zero
#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
	printf("Enter n value");
	scanf("%d",&n);
	if(n>0)
	{
		printf("Entered value is positive");
	}
	else if(n<0)
	{
		printf("Entered value is negitive");
	}
	else
	{
		printf("Entered value is zero");
	}
	return 0;
}

