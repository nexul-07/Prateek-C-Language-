#include <stdio.h>
int main()
{
    float celsius, farenheit;

    // sirf message print karna hai, value nahi
    printf("Enter the temperature in Celsius: ");  
    
    scanf("%f", &celsius);   // user se input lo

    farenheit = (celsius * 9.0 / 5.0) + 32;   // formula lagao

    printf("Temperature in Fahrenheit: %.2f\n", farenheit);

    return 0;
}
