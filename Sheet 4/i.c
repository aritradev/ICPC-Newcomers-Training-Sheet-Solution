#include <stdio.h>
#include <string.h>
int main()
{
     freopen("input.txt", "r", stdin);
     freopen("output.o", "w", stdout);
    int i, j, n;
    char s[10000];

    int flag = 1;
    scanf("%s", s);

    for (i = 0; i < strlen(s); i++)
    {

        if (s[i] != s[strlen(s) - i - 1])
        {
            printf("NO");
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("YES");
    }

    return 0;
}