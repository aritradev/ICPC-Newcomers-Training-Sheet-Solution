#include<stdio.h>
int main()
{
 char ch;
 scanf("%c",&ch);


 if(ch<=122 && ch>=97)
  {
 ch = ch - 32;
     printf("ALPHA\nIS SMALL",ch);
  }  
    
    else if (ch<=96 && ch>= 65)
    {
         
          printf("ALPHA\nIS CAPITAL");
    }

    else if (ch>=48 && ch<= 57){

 printf("IS DIGIT");
    }
   

}