#include <stdio.h>

int aramaxmin(int ara[], int x)
{
    int max = ara[0], min = ara[0] ;
    for (int i = 0; i < x; i++)
    {
        if (max < ara[i])
        {
            max = ara[i];
        }
        if (min > ara[i])
        {
            min = ara[i];
        }
    }
    printf("%d %d", min, max);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);
    int a, b, n;
    int ara[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    aramaxmin(ara, n);
    return 0;
}