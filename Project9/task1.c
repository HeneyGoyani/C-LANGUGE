#include<stdio.h>

void main() 
{
    FILE *ev_file, *od_file;
    int i;

    od_file = fopen("od_file.txt", "w");
    ev_file = fopen("ev_file.txt", "w");


        if (od_file == NULL || ev_file == NULL) 
	     {
             printf("Error opening file...");
             return;
         }


         for (i = 50; i <= 70; i++) 
	     {
             if (i % 2 == 0) 
	 	     {
                fprintf(ev_file, "%d ", i);
             } 
	    	else 
	       	{
                fprintf(od_file, "%d ", i);
            }
            
         }

   
    fclose(od_file);
    fclose(ev_file);
    
    
    printf("\nEven number printed in ev_file...\n");
    printf("Odd number printed in od_file...\n");
}