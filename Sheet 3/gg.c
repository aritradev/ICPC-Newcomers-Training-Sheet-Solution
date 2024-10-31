#include <stdio.h>
int main ()
{
     freopen("input.txt","r",stdin);
    freopen("output.o","w",stdout);

    int i , size , n, j;
scanf("%d",&n);
    int ara[n];

    

    for(i=0 ; i<n ;i++){

        scanf("%d",&ara[i]);
    }
    int flag=0;
    for(i=0 ; i<n ;i++)
    {
        if(ara[i]!=ara[n-i-1])
        {
            printf("NO");
            flag++;
            break;
        }
    }

    if(flag==0){
        printf("Yes");
    }


return 0;
}