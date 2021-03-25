//Increment or Decrement Operators(++,--)
#include <stdio.h>
int main(int argc, char **argv)
{
	int a,b,c,d;
	printf("Enter a value");
	scanf("%d",&a); //a=70
	//Post Increment
	printf("%d\n",a++); //70
	printf("%d",a); //71
	//Post decrement
	printf("Enter b value");
	scanf("%d",&b); //b=49
	printf("%d\n",b--); //49
	printf("%d\n",b); //48
	//Pre Increment
	printf("Enter c value");
	scanf("%d",&c); //c=98
	printf("%d\n",++c); //99
	printf("%d\n",c);//99
	//pre decrement
	printf("Enter d value");
	scanf("%d",&d); //d=101
	printf("%d\n",--d); //100
	printf("%d",d);//100
	return 0;
}




