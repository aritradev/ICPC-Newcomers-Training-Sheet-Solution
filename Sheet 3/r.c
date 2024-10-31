#include <stdio.h>
int main ()
{
freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);
    int n , c, i,j,flag,count;
    scanf("%d",&n);
    int a[n],b[n];
    for ( i = 0; i < n; i++)
    {
      scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
      scanf("%d",&b[i]);
    }
    
    count=0;

    for (i=0 ;i<n;i++){
        flag=0;
        for(j=0 ;j<n ;j++){
            if(a[i]==b[j])
            flag=1;
            b[j]=-100;
            break;
        }
        if(flag==0){
            count=1;
        }
    }
    if(count==0){
        printf("yes");
    }
    else printf("no");
    return 0;
}