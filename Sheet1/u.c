#include<stdio.h>
int main()
{

double a,sum ;
scanf("%lf",&a);

sum = a - (int)a;

if(sum!=0)
{
    printf("float %d %lf",(int)a,sum);
}
else {
    printf("int %.0lf",a);
}





}