#include<stdio.h>

void print(int arr[], int size)
{
   for(int i=0; i<size; i++)
      printf("%d ", arr[i]);
}


int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);
   int n;
   scanf("%d", &n);
   int arr1[10000];
   int arr2[10000];
   for(int i=0; i<n; i++)
      scanf("%d", &arr1[i]);
   for(int i=0; i<n; i++)
      scanf("%d", &arr2[i]);

   print(arr2, n);
   print(arr1, n);


   return 0;
}
