#include<stdio.h>
int main(){
 int i,n,even_count=0;
scanf("%d",&n);

for(i=1;i<=n;i++)
{
  if (i%2==0){

    printf("%d\n",i );
    even_count++;
     
  }

}
if(even_count==0)
printf("-1\n");


}
