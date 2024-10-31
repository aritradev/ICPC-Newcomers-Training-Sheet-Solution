#include <stdio.h>


struct Student
{
    char id[21];
    int roll , mark;
};
#define std struct Student
int main ()
{
    freopen("input.txt", "r", stdin);
  freopen("output.o", "w", stdout);
  int i;

  std a[100];
  strcpy(a[0].id, "c233178");
  a[0].roll=1;
  a[0].mark=100;

  strcpy(a[1].id, "c233179");
  a[1].roll=2;
  a[1].mark=99;

  strcpy(a[2].id, "c233146");
  a[2].roll=3;
  a[2].mark=88;

  strcpy(a[3].id, "c233138");
  a[3].roll=6;
  a[3].mark=50;


  for(i=0 ; i < 4 ;i++){
    printf("%s\n%d\n%d",a[i].id,a[i].roll,a[i].mark);
    printf("\n\n");
  }
  

 
return 0;
}