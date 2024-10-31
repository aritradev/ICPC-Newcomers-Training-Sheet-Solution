#include <stdio.h>
#include <string.h>
void sort_array(int b[], int n);
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.o", "w", stdout);
   int i ,j,n;
   scanf("%d",&n);
    for(i=1;i<=n;i++){
      // for space
      for(j=1;j<=n-i;j++){
        printf("  ");
      }
      for(j=1;j<=2*i-1;j++){
        printf("%d ",i);
      }
      printf("\n");
    }
    for(i=n-1;i>=1;i--){
      // for space
      for(j=1;j<=n-i;j++){
        printf("  ");
      }
      for(j=1;j<=2*i-1;j++){
        printf("%d ",i);
      }
      printf("\n");
    }
  return 0;
}
