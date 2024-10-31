#include <stdio.h>
#include<string.h>
int main ()
{
    freopen("input.txt","r",stdin);
    freopen("output.o","w",stdout);

    int n,t;
    scanf("%d",&t);
    char str[10000];
    while (t--)
    {
       scanf("%s",str);
       printf("%d\n",strlen(str));
       if(strlen(str)<=10){
        printf("%s\n",str);
       }
       else{
        printf("%c%d%c\n",str[0],strlen(str)-2,str[strlen(str)-1]);
       }
    }
    
return 0;
}