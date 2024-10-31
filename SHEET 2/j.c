#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i = 2 ; i <=n ; i++)
    {   
        int x = i;
        int flag_prime = 1 ;

        for (j=2 ; j < x ; j++)
        {
            if ( x % j == 0)
            {
                flag_prime = 0;
                break;
            }
        }

        if (flag_prime == 1)
        {
            printf("%d ", x);
        }


    }




}