 #include <stdio.h>
#include <string.h>
 
int main() 
{
   freopen("input.txt", "r", stdin);
     freopen("output.o", "w", stdout);
   int n ,i,j;
   scanf("%d ",&n);
   char s[1000009];
   
   gets (s) ;

   int len= strlen(s);
   char temp=0;

   for (i = 0 ; i < len -1 ; i++){
      for(j=0 ; j < len-i-1 ; j++){
         if(s[j]>s[j+1]){
            temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp;
         }
      }
   }
   for(i=0 ; i<len ; i++)
   printf("%c",s[i]);
   
   return 0;
}