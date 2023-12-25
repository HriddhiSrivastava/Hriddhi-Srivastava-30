#include <stdio.h>

int main()
{
    int arr[10] = {1,5,9,2,3,10,4,6,10,8};
    int max = arr[0];
    for ( int i = 0 ; i < 10 ; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("The largest value in the array is -%d",max);
    return 0 ;
}