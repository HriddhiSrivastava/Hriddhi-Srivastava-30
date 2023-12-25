#include<stdio.h>
    int a;
    int fn(int a)
    {
        if(a>1)
        return a = a*fn(a-1);
    }
   void main()
   {
    
    int b ;
    b =5;
    printf("%d\n",fn(b));

   }