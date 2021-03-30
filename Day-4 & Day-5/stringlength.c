#include <stdio.h>
int main()
{
	char str[50];
	int index=0,count=0;
	printf("Enter a string to calculate it's length:-");
	scanf("%s",str);  //Harideep
	for(index=0;str[index]!='\0';index++)
	{
		count++;
	}
	printf("length=%d",count);
	return 0;
}








