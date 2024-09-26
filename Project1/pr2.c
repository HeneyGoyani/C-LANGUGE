#include<stdio.h>

main()
{
	 float base,HRA,DA,TA,gross;


    printf("Base Salary: ");
    scanf("%f", &base);
    
    printf("HRA (as percentage): ");
    scanf("%f", &HRA);
    
    printf("DA (as percentage): ");
    scanf("%f", &DA);
    
    printf("TA (as percentage): ");
    scanf("%f", &TA);


    gross = base + (base * HRA / 100) +
                   (base * DA / 100) +
                   (base * TA / 100);
    

    printf("Gross Salary: Rs. %.2f\n", gross );

}
