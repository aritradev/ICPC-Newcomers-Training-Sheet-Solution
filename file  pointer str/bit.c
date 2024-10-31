#include <stdio.h>
int prod(int a, int b)
{ return a*b;
}

int main ()
{
freopen("input.txt", "r", stdin);
  freopen("output.o", "w", stdout);
  int x=10;
 int y=20;
 int p, q;
 p= prod(x,y);
 q= prod(p, x-2);
 printf(“%d %d\n”, p,q);
return 0;
}