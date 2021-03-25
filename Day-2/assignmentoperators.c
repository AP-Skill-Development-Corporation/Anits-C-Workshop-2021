//Assignment Operators(=,+=,-=,*=,/=,%=)
#include <stdio.h>
int main(int argc, char **argv)
{
	int a,b;
	printf("Enter a,b value");
	scanf("%d%d",&a,&b); //a=5 b=3
	a+=b;   //a=a+b;  //a=8
	printf("%d\n",a);
	a-=b; //a=a-b  //5  a=8-3  a=5
	printf("%d\n",a);
	a*=a; //a=a*a  // 25
	printf("%d\n",a);
	a/=b; //a=a/b  25/3  8
	printf("%d\n",a);
	return 0;
}





