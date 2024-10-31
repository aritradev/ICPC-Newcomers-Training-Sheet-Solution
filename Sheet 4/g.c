#include <stdio.h>
#include <string.h>
int main()
{
    freopen("input.txt", "r", stdin);
     freopen("output.o", "w", stdout);

    char b[10000];
    int i;
    gets(b);
    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] >= 97 && b[i] <= 122)
        {
            b[i] -= 32;
            printf("%c", b[i]);
        }
        else if (b[i] >= 65 && b[i] <= 90)
        {
            b[i] += 32;
            printf("%c", b[i]);
        }
        if (b[i] == ',')
        {
            printf(" ");
        }
    }

    return 0;
}