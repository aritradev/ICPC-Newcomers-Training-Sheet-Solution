#include <stdio.h>

//quick sort 

int comp (const void *a ,const void *b){
   return * (const int *)a - * (const int*)b;
}
 
int main()
{  freopen("input.txt","r",stdin);
    freopen("output.o","w",stdout);
    int size,i;
    scanf("%d", &size);
    int arr[size];
   
    for(i=0; i<size; i++)
    {
       scanf("%d", &arr[i]);
    }
    qsort(arr,size,sizeof(int),comp);
     





    for(i=0; i<size; i++)
    {
      printf("%d ", arr[i]);
    }
    
    //return 0;
}