 #include <stdio.h>
 
int main()
{
   freopen("input.txt","r",stdin);
    freopen("output.o","w",stdout);
    int n,m;
    int f = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        
    }
   
    scanf("%d",&m);

    for(int i=0 ; i<n ;i++)
    {
        if (m==arr[i])
          {  
          
            printf("%d\n",i);
            f = 1;
            break;
          }

    }
     
     if(f==0){
            printf("-1\n");
     }
     
     
    
 
    return 0;
}