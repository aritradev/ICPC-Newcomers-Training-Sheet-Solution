#include<stdio.h>
int main()
{
    int x,y;
    int odd=0,even=0,pos=0,neg=0;
    scanf("%d",&x);
    for(int i =0;i<x;i++)
    {
    scanf("%d",&y);
    {
     if (y%2==0)
        {
       even++;
        }
        else
        odd++;


    }
      
      {

       if(y<0)
        neg++;
        else if ( y>0)
        {
       pos++;
        }           
      }
        
    }
     printf("Even: %d\n",even);
        printf("Odd: %d\n",odd);
        printf("Positive: %d\n",pos);
        printf("Negative: %d\n",neg);

    return 0;
}