// count number of integers in a given number
#include <stdio.h>
int main(int argc, char **argv)
{
	int n,sum=0,r=0;
	printf("Enter n value");
	scanf("%d",&n); //n=123
	while(n!=0) 
	{
		r=n%10;  
		sum=sum+r; 
		n=n/10; 
	}
	printf("%d",sum);
	return 0;
}

