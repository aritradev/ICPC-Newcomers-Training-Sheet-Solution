#include <stdio.h>

void pr(int x)
{
    for (int i = 1; i <= x; i++){
    //  if(i!=1)
    //   {
    //      printf(" ");
    //   }
    
        printf("%d ", i);
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);
    int a, b;

    scanf("%d", &a);
    pr(a);
}