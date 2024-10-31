// #include <stdio.h>
// int main ()
// {
//      freopen("input.txt","r",stdin);
//     freopen("output.o","w",stdout);

//     int n , i;
//     scanf("%d",&n);
//     int a[n];
//     a[1]=0;
//     a[2]=1;
//     for (  i = 3; i <= n; i++)
//     {
//         //a[n]=a[n-1]+a[n-2]
//         a[i]=a[i-2]+a[i-1];
//     }
//     printf("%d",a[n]);
    


// return 0;
// }

#include <stdio.h>
 
int main()
{
     freopen("input.txt","r",stdin);
    freopen("output.o","w",stdout);
    int n,i;
 
    scanf("%d", &n);
 
     int a[n];
    a[1]=0;
    a[2]=1;
 
    for(i=3; i<=n; i++)
    {
        a[i]=a[i-2]+a[i-1];
    }
    printf("%d\n", a[n]);
 
    return 0;
}