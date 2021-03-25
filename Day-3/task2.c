//~ Task 2:
//~ -------

//~ ---> we should have to read age from the user

   //~ ---> age 18 or above    //age=14
   
              //~ ---> Eligible to vote
              
    //~ ---> you can vote after 4 years    //age=17

#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:-");
	scanf("%d",&age);
	if(age>=18)
		printf("you are elgible to vote");
	else
		printf("you will be eligible vote after %d years",(18-age));
	return 0;
}
