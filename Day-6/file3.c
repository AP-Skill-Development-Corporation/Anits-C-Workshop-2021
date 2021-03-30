#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("Harideep.txt","r");
	if (fp==NULL)
	{
		printf("File not created");
	}
	else
	{
		char d[30];
		fgets(d,30,fp);
		puts(d);
	}
	fclose(fp);
	return 0;
}





w3resource.com
codeforwin.org
studytonight.com
guru99.com

Youtube Channel:
----------------
C Programming by Naresh it solutions (Mr.Srinivas)

C Programming by Deccan Soft

apssdc.in

---> Applied Trainings   ----> Feedback










