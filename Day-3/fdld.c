//perfect number:
//6=1,2,3=1+2+3=6
//num=sum of all factors of it except the given number
//num=1234
//fd=1
//ld=4
#include <stdio.h>
int main()
{
	int num,fd=0,ld=0;
	printf("Enter any number:-");
	scanf("%d",&num);//1848
	ld=num%10;//8
	while(num>10)//1848>10,184>10,18>10,1>10
	{
		num=num/10;//1848/10=184/10=18/10=1
	}
	fd=num;
	printf("First digit=%d Last digit=%d",fd,ld);
	return 0;
}





