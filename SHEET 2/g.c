#include<stdio.h>
int main(){

    int i,j,n;
    scanf("%d",&n);
    for(i=1; i<=n ; i++)
    {
        int d;
       long long int fact =1;
        scanf("%d",&d);
        for(j=1 ; j <=d ; j++){

            fact = fact * j;

        }
        printf("%lld\n",fact);

    }



}

