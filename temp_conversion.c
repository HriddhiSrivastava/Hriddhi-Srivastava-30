#include <stdio.h>

float fahrenheit_to_celsius(float temperature)
{
    float celsius = ((temperature - 32)*5)/9;  // to convert the entered temperature from fahrenheit to celsius

    return celsius;
}

float celsius_to_fahrenheit(float temperature)
{
    float fahrenheit =  ((temperature + 32)*9)/5; // to convert the entered temperature from celsius to fahrenheit

    return fahrenheit;
}

int main()
{
    float temperature;
    int choice ;
    float temp_in_fahrenheit;
    float temp_in_celsius;
    
    printf("1.Fahrenheit to celsius \n");
    printf("2.Celsius to Fahrenhiet \n");
    printf("Enter your choice :") ;
    scanf("%d", &choice);

    switch(choice)
    {
        case 1 :

        printf("Enter the temperature in Fahrenheit");
        scanf( "%f\n ",&temperature);
        temp_in_celsius = fahrenheit_to_celsius(temperature);
        printf(" Temperature in Fahrenhiet is :%f\n",temp_in_celsius);

        break;

        case 2 :

        printf("Enter the temperature in Celsius");
        scanf( "%f\n ",&temperature);
        temp_in_fahrenheit = celsius_to_fahrenheit(temperature);
        printf("Temperature in Fahrenhiet is :%f\n",temp_in_fahrenheit);

        break;

        default :
        
        printf("Wrong Choice");
        break;
    }
    return 0 ;
}