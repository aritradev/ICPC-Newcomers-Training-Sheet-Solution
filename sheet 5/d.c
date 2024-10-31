#include <stdio.h>
#include <math.h>

void prime(int x)
{
    int count = 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            count++;
    }
    if (count == 0)
        printf("YES\n");
    else
        printf("NO\n");
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);
    int a, b, n;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &a);
        if (a == 1)
        {
            printf("NO\n");
            continue;
        }
        prime(a);
    }

    return 0;
}