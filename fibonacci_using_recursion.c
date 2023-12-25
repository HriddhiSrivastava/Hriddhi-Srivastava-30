#include<stdio.h>

int serie (int n);

void main( )
{
    int n=6;
    while(n!=0)
    {
    printf("  %d\n",serie(n));
    n = n-1;
    }
}
    int serie(int n)
    {
        if(n<2)
        {
        return n ;
        }
        else
        {
          return serie(n-1)+serie(n-2);
        }

    }