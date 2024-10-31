#include <stdio.h>
#include <string.h>
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);

    char s1[1000], s2[100], s3[1000], t;
    scanf("%s\n%s", s1, s2);
    printf("%d %d\n", strlen(s1), strlen(s2));
    strcpy(s3, s1);
    strcat(s1, s2);
    printf("%s\n", s1);
    t = s3[0];
    s3[0] = s2[0];
    s2[0] = t;
    printf("%s %s", s3, s2);

    return 0;
}