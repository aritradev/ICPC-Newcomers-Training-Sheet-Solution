#include<stdio.h>
int main()
{
int a ,b,sum;
char s,e;
scanf("%d %c %d %c %d",&a ,&s,&b,&e,&sum);
{
if( s==43 && e==61 ){
    if( a + b == sum)
    {
         printf("Yes");
    }
     
   else printf("%d",a+b);

   
}

}

{
if( s==42 && e==61){
     
   if( a * b == sum){

    printf("Yes");
    
}
else printf("%d",a*b);
}
}
{
if( s==45 && e==61){
     
    if(a - b == sum)

    printf("Yes");

    else printf("%d",a-b);
}

}



 


}