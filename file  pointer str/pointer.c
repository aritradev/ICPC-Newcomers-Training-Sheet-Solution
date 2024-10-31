#include <stdio.h>
int main ()
{freopen("input.txt", "r", stdin);
  freopen("output.o", "w", stdout);

  int a=1,b=2,c=3,d=4 ;
  int *p;
  printf("%x\n\n",&p);
  p=p-1;
  printf("a :%x\n",&a);
  printf("b :%x\n",&b);
  printf("c :%x\n",&c);
  printf("d :%x\n",&d);

    printf("\n%x",&p);
return 0;
}