#include <stdio.h>
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.o", "w", stdout);

  int i, j, r, c;
  int ar[100][100];
  scanf("%d%d", &r, &c);
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      scanf("%d", &ar[i][j]);
    }
  }
  int x;
  scanf("%d", &x);
  int flag = 0;

  for (i = 0; i < c; i++)
  {
    for (j = 0; j < r; j++)
    {
      // printf("%d ",ar[j][i]);
      if (x == ar[j][i])
      {
        flag = 1;
      }
    }
    // printf("%d ",ar[0][0]);
    // printf("\n");
  }
  if (flag == 1)
  {
    printf("will not take number\n");
  }
  else
    printf("will take number\n");

  return 0;
}