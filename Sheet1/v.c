#include<stdio.h>
int main()
{
int a ,b;
char s;
scanf("%d %c %d",&a,&s,&b);
if(a<b && s==60){
    printf("Right");
}

else if(a>b && s==62){
    printf("Right");
}
else if(a==b && s==61){
    printf("Right");
}
else 
printf("Wrong");




}