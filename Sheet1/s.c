#include <stdio.h>
#include<math.h>
int main() {

   double a;
   scanf("%lf",&a);



  if (0<= a && 25>=a)
    {

          printf("Interval [0,25]\n");
    }

    else if (25<a&&50>=a)
        {
        printf("Interval (25,50]\n");

    }

         else if (50<a&&75>=a)
        {
        printf("Interval (50,75]\n");

    }
    else if (75<a&&100>=a)
        {
        printf("Interval (75,100]\n");

    }
    else{
        printf("Out of Intervals\n");

    }



    return 0;
}
