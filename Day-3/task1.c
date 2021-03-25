
//~ --->read 2 values from the user

    //~ ---> check which is biggest number    //n=50 m=100
    
      //~ ---> m is big
      
      //~ //n=5000 m=4999
      
     //~ --->  n is big
#include <stdio.h>
int main()
{
	int m,n;
	printf("Enter m,n values");
	scanf("%d %d",&m,&n);
	if(m>n)
		printf("m=%d is greater than n=%d",m,n);
	else
		printf("n=%d is greater than m=%d",n,m);
	return 0;
}
