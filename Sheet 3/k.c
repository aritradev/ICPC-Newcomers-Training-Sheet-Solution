#include <stdio.h>
 
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.o","w",stdout);
    int size,i,sum;
    scanf("%d", &size);
    int arr[size];
    sum=0;
   
    for(i=0; i<size; i++)
    {
       scanf("%1d", &arr[i]);
        
    }
    for(i=0; i<size; i++){
        sum+=arr[i];
    }
    printf("%d",sum);


   
    return 0;
}