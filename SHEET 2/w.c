#include<stdio.h>
int main ()
{
     int i,n,j,s;
       
     scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
          
        for (j=1;j<=n-i;j++)
        {
             printf(" ");

        
        }
        for (s=1;s<=(i+i)-1;s++)
        {
            printf("*");
        }
        
        
        printf("\n");
        }







         for(i=n;i>=1;i--)
        {
          
        for (j=1;j<=n-i;j++)
        {
             printf(" ");


        
        }
        for (s=1;s<=(i+i)-1;s++)
        {
           printf("*");
        }
        
        
        printf("\n");
        }
    


      


}