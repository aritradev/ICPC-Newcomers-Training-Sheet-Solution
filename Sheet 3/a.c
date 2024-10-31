#include<stdio.h>
#include<math.h>
int main(){
freopen("input.txt","r",stdin);
   freopen("output.o","w",stdout);



int n,i;
long long int sum = 0 ;
scanf("%d",&n);
int array[100000];
int flag =0;
for(i=0 ;i<n ;i++)
{
    scanf("%d",&array[i]);

}
for(i=0 ;i<n ;i++){
    sum=sum+ array[i];
    flag++;
    
}
//sum = abs(sum);
printf("%lld\n",sum);
}