// Two dimensional array read and print the values
#include <stdio.h>
int main(int argc, char **argv)
{
	int r,c;
	printf("Enter number of rows and columns");
	scanf("%d%d",&r,&c);
	int a[r][c],i,j;
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Elements in two dimensional array are: ");
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

