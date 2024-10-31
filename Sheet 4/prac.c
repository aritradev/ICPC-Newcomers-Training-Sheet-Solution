 #include <stdio.h>
#include <string.h>
int main()
{
    freopen("input.txt", "r", stdin);       
     freopen("output.o", "w", stdout);
   
    char s[10000000],ch;
    gets(s);
    int m = strlen(s);
     for(ch='a'; ch<='z'; ch++)
    {
      int count = 0;
      for(int i=0; s[i]!='\0'; i++)
      //for(int i =0 ;s[i]<m ;i++)
      {
         if(ch==s[i])
            count++;
      }
       if(count != 0)
         printf("%c : %d\n", ch, count);
    }



 return 0;
}