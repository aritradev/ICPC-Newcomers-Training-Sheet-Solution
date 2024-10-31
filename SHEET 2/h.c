#include<stdio.h>
int main(){
 
 int n,i;
 int count=1;
 scanf("%d",&n);
 if(n==1)
 count=0;
 for(i=2;i<n;i++)
 {
    if(n%i==0)
    {
        count=0;

    }
 }
    if (count==1)
    printf("YES\n");
    else 
    printf("NO\n");



}