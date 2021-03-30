#include <stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("Harideep.txt","w");
	if (fp==NULL)
	{
		printf("File Not created");
	}
	else
	{
		printf("File created");
	}
	fclose(fp);
	return 0;
}
