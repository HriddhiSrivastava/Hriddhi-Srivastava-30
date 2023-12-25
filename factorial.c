#include <stdio.h>

int main ()
{
    int num;
    int fact=1;
    printf("Enter the number ");
    scanf("%d",&num);

    for(int i = num ; i >0 ; i--)
    {
        fact= fact * i ;
    }

    printf("Factorail of the input number is:%d",fact);
    return 0 ;

}