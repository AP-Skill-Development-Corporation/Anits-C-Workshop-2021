//Sample function implementation
#include <stdio.h>
void function();
void fun1()
{
	printf("In User defined function -1\n");
}
int main()
{
	printf("In Main function\n");
	fun1();
	printf("In main function after user defined function-1\n");
	function();
	printf("Executed all user defined functions");
	return 0;
}
void function()
{
	printf("In userdefined function\n");
}
