#include <stdio.h>
int main ()
{   
    int n ;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    int numb[n] ;
    float avg = 0.0;
    int sum = 0;
    printf("Enter an array");
    for(int k = 0 ; k<n ; k++)
    {
    scanf("%d",&numb[k]);
    sum = sum + numb[k];
    }
    float n1 = n;
    avg = sum/n1;
    printf("Average is :%f",avg);
    int temp = numb[0];
    int temp1 = numb[0];
    int pos = 0 ;
    int pos1 = 0;
    for(int i = 0;i<n;i++)
    {
     if(numb[i]>=temp)
     {
       temp = numb[i];
       pos = i ;
     }
    }
     printf("Maximum in array is %d",temp);
     printf(" at index = %d\n",pos);

    for(int j = 0;j<n;j++)
    {
     if(numb[j]<=temp1)
     {
       temp1 = numb[j];
       pos1 = j ;
     }
    }
     printf("Minimum in array is %d",temp1);
     printf(" at index = %d",pos1);
     return 0;
}