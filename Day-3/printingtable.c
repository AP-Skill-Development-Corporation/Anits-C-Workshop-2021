//printing maths table for user given number
#include <stdio.h>
int main()
{
	int num,i;
	printf("enter the number :-");
	scanf("%d",&num);
	for(i=1;i<11;++i)
		printf("%d * %d=%d\n",num,i,num*i);
	return 0;
}
