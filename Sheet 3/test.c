
#include <stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);

    int r, i, j, c;
    scanf("%d", &r);

    int ara[100][100];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }
    int sum1 = 0;
    int sum2 = 0;
    int sum;

    for (i = 0; i < r; i++)
    {
        j = i;
        sum1 = sum1 + ara[i][j];
    }
    printf("1st %d\n", sum1);
    int k = r - 1;
    for (i = 0; i < r; i++)

    {
        sum2 = sum2 + ara[i][k--];
    }
    printf("2nd %d\n", sum2);

    sum = sum1 - sum2;
    if (sum < 0)
    {
        sum = sum * (-1);
        printf("%d", sum);
    }
    else
        printf("%d", sum);

    return 0;
}