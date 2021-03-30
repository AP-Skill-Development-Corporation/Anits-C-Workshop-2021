// to check the given number is prime or not
#include <stdio.h>
int main(int argc, char **argv)
{
	int n,i,factors=0;
	printf("Enter n value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0) 
		{
			factors++; 
		}
	}
	if(factors==2)
	{
		printf("It is a prime number");
	}
	else
	{
		printf("Not a prime number");
	}
	return 0;
}

Arrays:
=======

int a=20,20,70

b
c
d
 100    100
 
Type of arrays:
---------------
     2 types
     
     1--> Numerical Array
          2 types
           1 --> One Dimensional Array
           2 --> Multi Dimensional Array
     2--> Character Array

Syntax for one dimensional array:
=================================

datatype arrayname[size];

Ex: int anits[5];

Syntax for multi dimensional array:
===================================
datatype arrayname[size][size];   

Ex: int abc[3][3]; //9 























