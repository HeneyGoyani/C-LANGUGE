#include<stdio.h>

main()
{
	int num, first,last,sum;
	
	printf("enter the value of anu number =");
	scanf("%d",&num);
	
	last = num % 10;
	
	while(num>=10)
	{
		num=num/10;
	}
	first = num;
	
	sum = last + first;
	
	printf("sum of first and last digit =%d",sum);
}