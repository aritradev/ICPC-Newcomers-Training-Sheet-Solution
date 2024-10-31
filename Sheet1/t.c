#include<stdio.h>
int main(){
     int a,b,c,max,mid,min;
     scanf("%d%d%d",&a,&b,&c);

        if(a<b && a<c)
        {
            min=a;

            if (b<c)
            {

            mid =b;
            max=c;
            }
            
            else 
            {
                mid=c;
                max=b;
            }


        }
        else if (b<a && b<c)
        {
        min=b;
        if (a<c)
        {
            mid=a;
            max=c;
        }
        else 
        {
            mid=c;
            max=a;
        }
    }

        else if (c<a&& c<b)
        {
        min=c;
        if(a<b)
        {
            mid=a;
            max=b;

        }
        else {
            mid=b;
            max=a;
        }
        
        }

    else if (a==b && a<c)
    {
        min=a;
        max=c;
        mid=b;
    }
    else if (a==c & a<b)
    {
        min =a;
        mid=c;
        max=b;

    }
    else if(b==c && b<a)
    {
        max=a;
        min=c;
        mid=b;
    }
    else {
        mid=a;
        min=a;max=a;
    }
printf("%d\n%d\n%d\n",min,mid,max);
printf("\n%d\n%d\n%d\n",a,b,c);

        



}