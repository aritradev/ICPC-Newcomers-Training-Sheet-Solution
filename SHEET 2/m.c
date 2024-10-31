#include <stdio.h>
int main()
{
   int a, b;
  int i, n;
  int ul=0; //unlucky num
  scanf("%d %d", &a, &b);
  for(i=a; i<=b; i++)
    {
      int ch = 0;
      n = i;
      while(n!=0)
        {
          int digit = n%10;
          n/=10; //n = n/10
          if(digit!=7 && digit!=4)
            ch = 1;
        }
      if(ch==0)
      {
        printf("%d ", i);
        ul++;
      }
    }
    if(ul==0)
      printf("-1");

   return 0;
}
