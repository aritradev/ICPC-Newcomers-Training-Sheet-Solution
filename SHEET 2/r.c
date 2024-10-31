#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n;
    int x, y, a; // a is temp
    int s;

    while(1)
    {
      scanf("%d", &x);
      scanf("%d", &y);
      if(x <= 0)
        break;
      if(y <= 0)
        break;
      if(x > y)
      {
        a = x;//10
        x = y;//5
        y = a;
      }
      s = 0;
      int i;
      for(i = x; i <= y; i++)
      {
        printf("%d ", i);
        s = s+i;
      }
      printf("sum =%d\n", s);
    }


    return 0;
}
