#include<stdio.h>

void element()
{
	int a[10][10];
	int(*ptr)[10];
	int n;
	
	printf("Enter size of Array :");
	scanf("%d",&n);
	
	ptr = a;
	
	printf("Enter element of Array:\n");
	
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter A[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}	
	}
	
	printf("Element Cubes:\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d",ptr[i][j]*ptr[i][j]*ptr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	element();
}