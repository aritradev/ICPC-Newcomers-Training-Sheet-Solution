#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);

    int n;
    scanf("%d", &n);
    int num[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int flag = 1, op = 0;
    while (flag == 1)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (num[i] % 2 == 0)
            {
                count++;
                num[i] = num[i] / 2;
            }
            else
                flag = 0;
        }
        if (count == n)
            op++;
    }
    printf("%d\n", op);

    return 0;
}
