#include <stdio.h>

void swap(int *x , int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
 main ()
 {
 	int a,b;
 	
 	printf("Enter the Number A : ");
 	scanf("%d",&a);
 	
 	printf("Enter the Number B : ");
 	scanf("%d",&b);
 	
 	swap(&a, &b);
 	
 	printf("After Swapping : \n");
 	printf("Value A : %d\n",a);
 	printf("Value B : %d\n",b);
 }