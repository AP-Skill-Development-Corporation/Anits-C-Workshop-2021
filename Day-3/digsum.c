#include<stdio.h>
int main()
{
	int a,sum=0,r=0;//
	printf("enter the value a");
	scanf("%d",&a);//365
	while(a!=0)//0!=0
	{
		r=a%10;//3%10=3
		sum=sum+r;//0+5=5+6=11+3=14
		a=a/10;//365/10=36/10=3/10=0
	}
	printf("%d",sum);//14	
	return 0;
}
