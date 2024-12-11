#include <stdio.h>

main()
{
	FILE *fp;
	char msg[30];
	
	fp = fopen("users.txt","w");
	
	fprintf(fp,"hello..");
	
	fclose(fp);
	
	fp = fopen("users.txt","r");
	
	fscanf(fp,"%s",&msg);
	
	printf("%s",msg);
}