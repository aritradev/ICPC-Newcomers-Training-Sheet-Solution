#include <stdio.h>
#include <string.h>
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);
    char line[1000];
    gets(line);
    for (int i = 0; line[i] != '\\'; i++)

    {
        printf("%c", line[i]);
    }
    return 0;
}