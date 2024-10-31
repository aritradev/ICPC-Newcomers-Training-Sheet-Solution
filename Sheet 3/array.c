#include <stdio.h>
int main ()
{
    freopen("input.txt","r",stdin);
    freopen("output.o","w",stdout);
   int i,j,num,n,x;
   int ara[100];
   scanf("%d",&n);
   for(i=0;i<n;i++){
    scanf("%d",&ara[i]);
   }
   int palin=1;
   int temp=1;
    
    for(i=0;i<n;i++){
        if(ara[i]>ara[i+1]){
           ara[i]=temp;
           ara[i]=ara[i+1];
            ara[i+1]=temp;
        }
    }
     
return 0;
}


//     for(i=0; i<size; i++)
//     {
//       if(arr[i] !=arr[size-1-i])//2 = 4-1-2 
//       {
//         palindrom=0;
//         break;
//       }
        
//     }
//   if(palindrom==0)
//     printf("NO\n");
//   else
//     printf("YES\n");
   