#include<stdio.h>
 
double avr(double ara[], double n)
{
  double sum=0 ;
    for(int i=0; i<n; i++)
    {
       sum+=ara[i];
    }
    double avr = sum / n;
    printf("%.6lf",avr);
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.o", "w", stdout);
    int n;
    scanf("%d", &n);
    double ara[1000];
    for (int i = 0 ; i < n ; i++)
    {
       
        scanf("%lf", &ara[i]);
       
    }
    avr (ara , n);
}