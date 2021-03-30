//Addition of two matrix
#include <stdio.h>
int main(int argc, char **argv)
{
	int r,c;
	printf("Enter number of rows and columns");
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c],result[r][c],i,j;
	printf("Enter 1st matrix values: ");
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("ENter 2nd matrix values: ");
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			result[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}




