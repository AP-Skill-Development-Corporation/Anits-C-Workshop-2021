//with arguments with return value
#include <stdio.h>
int add(int a,int b);
int main(int argc, char **argv)
{
	int a,b,result;
	printf("Enter a,b values");
	scanf("%d%d",&a,&b);
	result=add(a,b);
	printf("%d",result);
	return 0;
}
int add(int a,int b)
{
	return a+b;
}




