#include <stdio.h>
 
int main()
{
freopen("input.txt","r",stdin);
    freopen("output.o","w",stdout);
    
    
        int size,i;
    scanf("%d", &size);
    int arr[size];
    int palindrom=1;
   
    for(i=0; i<size; i++)
    {
       scanf("%d", &arr[i]);
    }
 
    for(i=0; i<size; i++)
    {
      if(arr[i] !=arr[size-1-i])//2 = 4-1-2 
      {
        palindrom=0;
        break;
      }
        
    }
  if(palindrom==0)
    printf("NO\n");
  else
    printf("YES\n");
   
 
    return 0;
}