#include<stdio.h>
 int main()
{
 
 int a,b,c,min,max;
scanf("%d %d %d",&a,&b,&c);
 
if (b<a && b<c){
 
min = b;
if (a<c)
{
    max=c;
}
    else 
    max=a;
}
 
else if (c<a && c<b){
 
min = c;
if (a<b)
{
    max=b;
}
else 
max=a;
}
 
else if(a<b && a<c) {
min = a;
if(b>c)
{
    max=b;

}
else 
max=c;
}
else if(a==b && a<c)
{
    max=c;
    min=a;
}
else if (a==c && a<b)
{
    max=b;
    min=a;
}
else if (b==c && c<a)
{
    max=a;
    min=b;
}
  else 
  {
    max=a;
    min=a;
  }
 
 printf("%d %d",min,max);
 
}
 