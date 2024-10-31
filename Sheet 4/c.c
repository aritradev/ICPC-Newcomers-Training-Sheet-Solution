#include <stdio.h>
#include <string.h>
int main()
{
    
    char a[100],b[100];
    gets(a);
    gets(b);

   int  d=strlen(a);
    int e=strlen(b);
   // printf("%d %d",d,e);

    if(d>e){
        printf("%s",b);
    }
     if(d==e){
        printf("%s",b);
    }
   else 
   printf("%s",a);
   
    return 0;
}