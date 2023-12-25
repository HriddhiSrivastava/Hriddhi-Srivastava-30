#include <stdio.h>

int main ()
{
    int n;
    int sum = 0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(int i = 1 ; i <=n ; i++)
    {
        sum = sum+i;
    }

    printf("Sum of n natural numbers is :%d",sum);

    return 0 ;
}