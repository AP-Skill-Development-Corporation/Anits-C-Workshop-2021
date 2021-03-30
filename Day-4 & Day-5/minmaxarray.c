//to find min and max value from array
#include <stdio.h>
int main(int argc, char **argv)
{
	int size;
	printf("Enter array size: ");
	scanf("%d",&size);
	int xyz[size],i;
	printf("Enter array elements: ");
	for(i=0;i<=size-1;i++)
	{
		scanf("%d",&xyz[i]);
	}
	int max=xyz[0]; // 62 75 71 -5 47 20
	for(i=0;i<=size-1;i++) 
	{
		if(xyz[i]>max)  
		{
			max=xyz[i];
		}
	}
	printf("Maximum= %d\n",max);
	int min=xyz[0];
	for(i=0;i<=size-1;i++)
	{
		if(xyz[i]<min)
		{
			min=xyz[i];
		}
	}
	printf("Minimum = %d",min);
	return 0;
}



//~ pqr[5]   45 99 20 6 15


//~ 20+6

//~ Even numbers sum:26

//~ odd numbers sum:159


















