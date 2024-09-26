#include<stdio.h>
main() 
{
	int angle1, angle2, angle3;

    printf("First angle: ");
    scanf("%d", &angle1);
    
    printf("Second angle: ");
    scanf("%d", &angle2);


    angle3 = 180 - (angle1 + angle2);
    

    printf("Third angle: %d\n", angle3);
}