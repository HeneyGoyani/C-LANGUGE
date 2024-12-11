#include <stdio.h>

main()
{
	int a = 1;
	int i,fact = 1;
	
	printf("Enter the Value : ");
	scanf("%d",&i);
	
	while(a<=i)
	{
		printf("\n%d\t",a);
		fact = fact*a;
		a++;
	}
	
	printf("\n\nFactorial = %d",fact);
}