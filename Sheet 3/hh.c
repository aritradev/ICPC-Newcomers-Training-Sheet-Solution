#include <stdio.h>
int main ()
{
freopen("input.txt","r",stdin);
    freopen("output.o","w",stdout);

 int i , n , j ;
 scanf("%d",&n);
 int array[n];
for(i=0 ; i<n ;i++){
    scanf("%d",&array[i]);
}
 
for (i=0 ; i <n-1 ; i++){
    for (j=0 ; j<n-1 ; j++)
    {
        if(array[j]> array[j+1]){
           int min = array[j];
            array[j]= array[j+1];
            array[j+1]= min;

        }
    }
    
}
for(i=0 ; i<n ;i++){
    printf("%d ",array[i]);}


return 0;
}