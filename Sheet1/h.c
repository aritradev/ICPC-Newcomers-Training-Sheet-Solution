#include<stdio.h>
#include<math.h>
int main()
{
     double a,b,c;
     scanf("%lf %lf",&a,&b);
     c=a/b;
     printf("floor %.lf / %.lf = %.lf\n",a,b,floor(c));
     printf("ceil %.lf / %.lf = %.lf\n",a,b,ceil(c));
     printf("round %.lf / %.lf = %.lf\n",a,b,round(c));
    return 0;
}
