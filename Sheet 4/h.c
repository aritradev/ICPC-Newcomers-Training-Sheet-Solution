#include <stdio.h>
#include <string.h>
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.o", "w", stdout);
    int i, j, n;
    char s[1000000];
    scanf("%d", &n);

    while (n--)
    {
        int flag = 0;
        scanf("%s", s);
        // printf("%s\n", s);
        for (i = 0; i < strlen(s) - 2; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0' || s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
            {
                flag = 1;
                break; /* code */
            }

            /* code */
        }
        if (flag == 1)

            printf("Good\n");
        else
            printf("Bad\n");
    }
    return 0;
}