#include <stdio.h>

int sum (int x, int y)
{
    // int sum=0;
    // sum = x + y;
    return x + y ;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);
    int a,b;

    scanf("%d %d ",&a,&b);
    // int m = sum(a,b);
    printf("%d",sum(a,b));

    

    return 0;
}