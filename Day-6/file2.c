#include <stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("Harideep.txt","w");
	if (fp==NULL)
	{
		printf("File not created");
	}
	else
	{
		char d[30];
		fgets(d,30,stdin);
		fputs(d,fp);
	}
	fclose(fp);
	return 0;
}




