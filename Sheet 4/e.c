#include<stdio.h>
#include<string.h>
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.o","w",stdout);
    char a[1000000];
    int i,s=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++){
        s+=(a[i]-48);
    }
    printf("%d\n",s);
    return 0;
}




