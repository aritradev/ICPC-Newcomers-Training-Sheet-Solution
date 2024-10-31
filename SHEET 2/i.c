#include <stdio.h>

int main()
{
	int n, a, r, sum=0;
  scanf("%d", &n);
  a = n;

  while(a!=0)///n=12
  {
    r = a % 10;// r= 2
    sum = sum * 10 + r;//12
    a = a / 10;
  }
  if(n==sum)
  {
    printf("%d\n",sum);
    printf("YES\n");
  }
  else
  {
    printf("%d\n", sum);
    printf("NO\n");

  }


	return 0;
}
