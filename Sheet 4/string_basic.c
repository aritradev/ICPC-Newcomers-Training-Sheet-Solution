#include <stdio.h>
#include<string.h>
int main ()
{
    freopen("input.txt","r",stdin);
    freopen("output.o","w",stdout);
    char name [100];
    //gets(name);
    scanf("%[^a] ",name);
  int count=0;
  count=strlen(name);
    printf("%d",count);
    

return 0;
}