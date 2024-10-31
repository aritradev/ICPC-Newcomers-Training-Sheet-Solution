#include<stdio.h>
int main() {
    int a,y,m,m1,d;
    scanf("%d",&a);
    y = a/365;
    printf("%d years\n",y);
    m = (a%365);
    m1 =m/30; 
    printf("%d months\n",m1);
    d = m%30;
    printf("%d days\n",d);
    return 0;
}