//Demo of Recursion
#include <stdio.h>
int sumofarray(int a[],int size,int start)
{
	if (start==size)//0==3
		return 0;
	else
		return a[start]+sumofarray(a,size,start+1);
}
int main()
{
	int size,i,sum;
	printf("Enter number of Values :- ");
	scanf("%d",&size);
	int arr[size];//1,2,3
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	sum=sumofarray(arr,size,0);//6
	printf("sum of array elements is %d",sum);
	return 0;
}
