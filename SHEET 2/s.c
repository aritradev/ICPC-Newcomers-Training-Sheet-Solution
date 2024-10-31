#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n;
  scanf("%d", &n); //4
  while(n--) //4 3 2 1
    {
      int num1, num2;
      scanf("%d %d", &num1, &num2); //2 7
      int max, min, sum=0;
      if(num1>=num2)
      {
        max = num1;
        min = num2;
      }
      else
      {
        max = num2; //7
        min = num1; //2
      }
      for(int i=min+1; i<max; i++) //2 (3 4 5 6) 7
        {
          if(i%2!=0) // 4/2 = 0; 5/2 = 2.5;
            sum +=i; // 3 + 5 + i=sum
        }
      printf("%d\n", sum);
    }

    return 0;
}
