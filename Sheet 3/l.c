#include <stdio.h>
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.o", "w", stdout);

    int n, i, x, mx, sz, t, tc;

    int ara[100];
    scanf("%d", &tc);
    for (t = 0; t < tc; t++)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }

        for (sz = 1; sz <= n; sz++)
        {

            for (x = 0; x <= n - sz; x++)
            {
                int mx = ara[x];

                for (i = x; i < x + sz; i++)
                {

                    if (mx < ara[i])
                    {
                        mx = ara[i];
                    }
                  
                }
                  printf("%d ", mx);
            }
        }
         printf("\n");
    }
    return 0;
}