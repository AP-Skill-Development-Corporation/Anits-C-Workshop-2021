// Arthimetic operation using switch case
#include <stdio.h>
int main(int argc, char **argv)
{
	int n,m;
	printf("Enter n,m Values");
	scanf("%d%d",&n,&m);
	int choice;
	printf("Enter choice value");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("Addition = %d",n+m);
			break;
		case 2:printf("Subtraction = %d",n-m);
			break;
		case 3:printf("Multiplication = %d",n*m);
		    break;
		case 4:printf("Divison = %d",n/m);
			break;
		default:printf("Choose the values from 1 to 4");
	}
	return 0;
}


    
    
    
    
    
    
    
    
    
    
    
    
    













