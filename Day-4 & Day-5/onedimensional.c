// one dimensional array store and print the values.
//datatype arrayname[size];
#include <stdio.h>
int main(int argc, char **argv)
{
	int size;
	printf("Enter size of the array");
	scanf("%d",&size);
	int abc[size],i;
	for(i=0;i<=size-1;i++)
	{
		scanf("%d",&abc[i]);
	}
	printf("Values in the array are : ");
	for(i=0;i<=size-1;i++)
	{
		printf("%d\t",abc[i]);
	}
	return 0;
}
