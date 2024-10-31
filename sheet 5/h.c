#include<stdio.h>
 
void ntimes(int n, char c)
{
    for(int i=1; i<=n; i++)
    {
        printf("%c ", c);
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);
    int lines;
    scanf("%d", &lines);
    while(lines--)
    {
        int t;
        char c;
        scanf("%d %c", &t, &c);
        ntimes(t,c);
        printf("\n");
    }
}