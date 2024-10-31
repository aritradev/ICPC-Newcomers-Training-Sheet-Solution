#include<stdio.h>
int main()
{
 
   int n;
   int x,mx;
   scanf("%d",&n);
   int i = 1;
   mx=0;
   while (i<=n)
   {
       scanf("%d",&x);
       if (mx<x)
       {
           mx=x;
       }
       i=i+1;
   }
 
     printf("%d",mx);
 
 
    return 0;
}