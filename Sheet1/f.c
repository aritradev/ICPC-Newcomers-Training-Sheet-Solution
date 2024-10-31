#include<stdio.h>
int main ()
{
    int i,x,n,m,xm;
     
     scanf("%d",&n);
        int k=1;
    for(i=1;i<=12;i++)
    {
        
        m=k++;
        xm=m*n;
        printf("%d * %d = %d\n",n,m,xm);

    }



}