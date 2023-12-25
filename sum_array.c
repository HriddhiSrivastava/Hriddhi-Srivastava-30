#include <stdio.h>

int main()
{
    int sum = 0;
    int arr[10] = {1,5,9,2,3,7,4,6,10,8};
    for(int i = 0 ; i<10 ; i++)
    {
       sum = sum + arr[i];
    }
    printf("Sum of elements =%d",sum);
    return 0 ;
}