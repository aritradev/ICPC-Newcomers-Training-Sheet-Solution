#include<stdio.h>
#include<math.h>
int main()
{
unsigned long long int a,b,c,d,m;
scanf("%llu %llu %llu %llu",&a,&b,&c,&d);

   long double mul= a*c*b*d;
 m= fmod(mul,1000);
//int mul= mul%100;

printf("%llu",m);





}