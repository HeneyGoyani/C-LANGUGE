#include<stdio.h>

main() {
    float celsius, fahrenheit;
    

    printf("The temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (9/5*celsius) + 32;
    

    printf("The temperature in Fahrenheit: %.1f\n", fahrenheit);
    

}