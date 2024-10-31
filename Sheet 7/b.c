#include<stdio.h>
 
void Rec(int i)
{
   if(i==1)
    {
        printf("%d\n",i);
      return ;
    } 
    Rec(i-1);
   printf("%d\n",i);
   
}
 
 
int main()
{
   int n;
   scanf("%d", &n);
   Rec(n);
}