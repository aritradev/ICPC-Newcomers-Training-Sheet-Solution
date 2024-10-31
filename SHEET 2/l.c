#include<stdio.h>
int main(){
 
 int n,i,m,min,count;
 scanf("%d %d",&m,&n);

if (m>n)
min=n;
else min=m;

 for(i=1;i<=min;i++)
 {
    if(n%i==0 && m%i==0)
    {
      count=i;
    }
 }
      printf("%d\n",count);



}