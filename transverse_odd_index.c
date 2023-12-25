#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("Index and Values \n");
    for(int i = 0 ; i<10 ; i++)
    {
    printf("%d %d\n", i , arr[i]);
    }
    printf("Odd Index are - \n");
    for(int j= 0 ; j<10 ; j++)
    {
        if(j%2 != 0)
        {
            printf("Index and Value %d %d\n",j,arr[j]);
        }
    }
    return 0 ;
}