#include <stdio.h>

int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.o","w",stdout);
    int t, result;
    int flag = 1, min;
    scanf("%d", &t);
    while (t--)
    {
        int size;
        scanf("%d", &size);
        int arr[size];
         int min = 2000000;
        for (int i = 1; i <= size; i++)
            scanf("%d", &arr[i]);

        for (int j = 1; j <= size; j++)
        {
            for (int k = j + 1; k <= size; k++)
            {
                result = arr[j] + arr[k] + (k - j);
                // printf("%d\n", result);

                if (min > result)
                {
                    min = result;
                }
            }
        }
        printf("%d\n", min);
    }
    return 0;
}
