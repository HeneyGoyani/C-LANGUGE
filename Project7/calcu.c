#include <stdio.h>

void calcu()
{
	int a,b,c;
	
	do
	{
		printf("1.Addition\n");
		printf("2.Subtraction\n");
		printf("3.Multiplication\n");
		printf("4.Divisiov\n");
		printf("5.Modulus\n");
		printf("6.Exit\n");
		
		printf("Enter your Number : ");
		scanf("%d",&c);
		
		if(c>=1 && c<=5)
		{
			printf("\n\nEnter any Number : ");
			scanf("%d",&a);
			printf("\n\nEnter any Number : ");
			scanf("%d",&b);
			
			switch(c)
			{
				case 1:
					printf("Addition :%d\n",a+b);
					break;
				case 2:
					printf("Subtraction :%d\n",a-b);
					break;
				case 3:
					printf("Multiplication :%d\n",a*b);
					break;
				case 4:
					printf("Division :%d\n",a/b);
					break;
				case 5:
					printf("Modulus :%d\n",a%b);
					break;
				
			}
			
		}
		else
		{
			printf("Enter Valid Number..\n");
		}

	}
	while(c!=5);
}
int main()
{
	calcu();
}