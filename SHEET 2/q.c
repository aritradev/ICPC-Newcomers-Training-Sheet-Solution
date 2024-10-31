#include<stdio.h>
int main(){

    int test_case;
    
        scanf("%d",&test_case);

        for(int i=1 ; i<=test_case ; i++)
        {
            int n;
             scanf("%d",&n);

             if (n==0)
             printf("0 ");
             while(n>0){

               int r = n%10;
                printf("%d ",r);
                n= n/10;

             }
             printf("\n");


        }


    return 0;

}