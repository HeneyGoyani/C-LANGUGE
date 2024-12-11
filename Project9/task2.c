#include<stdio.h>

struct Students 
{
    int std_id;
    char std_name[80];
    int std_maths;
    int std_chemistry;
    int std_physics;
};

int main() 
{
    int i, s;

    printf("Enter number of Student = ");
    scanf("%d", &s);

    struct Students stud[s];

    for (i=0; i<s; i++) 
	{
    	printf("\nEnter details for Student = %d\n", i + 1);
    	printf("Roll No. = ");
    	scanf("%d", &stud[i].std_id);
    	printf("Name = ");
    	scanf(" %[^\n]", stud[i].std_name);
    	printf("Maths = ");
    	scanf("%d", &stud[i].std_maths);
    	printf("Chemistry = ");
    	scanf("%d", &stud[i].std_chemistry);
    	printf("Physics = ");
    	scanf("%d", &stud[i].std_physics);
	}


    printf("\nResult of Students \n");
    
    
    for (i=0; i<s; i++) 
	{
        printf("%s", stud[i].std_name);
        printf(" (%d)\n", stud[i].std_id);
        printf("Mathematics = %d\n", stud[i].std_maths);
        printf("Chemistry = %d\n", stud[i].std_chemistry);
        printf("Physics = %d\n", stud[i].std_physics);
        
        
        int total = (stud[i].std_chemistry + stud[i].std_maths + stud[i].std_physics);
		printf("Total = %d/300\n", total);
        
        
		float percentage = ((float)(stud[i].std_chemistry + stud[i].std_maths + stud[i].std_physics) / 300) * 100;
		printf("Percentage = %.2f%%\n", percentage);
		
		
		printf("\n");
    }
}