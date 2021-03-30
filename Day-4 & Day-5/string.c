#include <stdio.h>
#include <string.h>
int main()
{
	char s[]={'a','p','s','s','d','c'};
	printf("String length is %d\n",strlen(s));
	puts(s);
	char s1[50];
	strcpy(s1,s);
	puts(s1);
	strrev(s1);
	puts(s1);
	strcat(s,s1);
	puts(s);
	return 0;
}
