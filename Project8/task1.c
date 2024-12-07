#include<stdio.h>
#include<string.h>

int main()
{
	char a[20],*ptr;
	int ans;
	
	printf("Enter Any String : ");
	gets(a);
	
	ptr = &a;
	ans = 0;
	
	while(*ptr!='\0')
	{
		ans++;
		ptr++;
	}
	 
	 printf("Length of String :%d",ans);
	
}