#include <stdio.h>

float calculate_simple_interest(float principle,float rate,float time)
{
   float simple_interest = (principle*rate*time)/100;   //to calculate simple interest

    return simple_interest ;
}

int main()

{  
    float simpleinterest;
    float principle,rate,time ;

    printf("Enter the principle:");
    scanf("%f",&principle);
    printf("Enter the rate:");
    scanf("%f",&rate);
    printf("Enter the time:");
    scanf("%f",&time);

   simpleinterest =  calculate_simple_interest(principle,rate,time);
   printf("SIMPLE INTEREST:%f",simpleinterest);

   return 0 ;

}