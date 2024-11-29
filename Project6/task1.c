#include<stdio.h>
#include<string.h>

main()
{
	char str[20];
	
	
	printf("Enter any String :");
	scanf("%s",&str);
	
	for (int i = 0; i<strlen(str); i++)
	{
		int num = 1;
		
		for(int j=i+1; j<strlen(str); j++)
		{
				if(str[i]==str[j])
        	{
        		num++;
        		str[j]='\0';
			}
		}
		    if(str[i]!='\0')
			printf("%c => %d\n",str[i], num);
	}
}