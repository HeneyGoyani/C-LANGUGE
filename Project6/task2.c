#include<stdio.h>
#include<string.h>

main()
{
	char str[50] , rev[50];
	int Palindrome = 1 , length = 0;
	
	 printf("Enter a string:");
     scanf("%s", str);
     
   	int i;

    for (i=0; str[i] !='\0';i++) 
	{
        length++;
    }
    
    for (i=0;i<length;i++)
    {
    	rev[i]=str[length-i-1];
	}
	rev[length]='\0';
	
	for (i=0;i<length;i++)
	{
       
	    if (str[i] != rev[i]) 
		{
            Palindrome = 0;
            break;
        }
        
    }
    
       if(Palindrome)
	     {
            printf("The string is a palindrome\n");
         } 
       else 
       	{
        printf("The string is not a palindrome\n");
    }

     

}