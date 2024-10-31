#include <stdio.h>

int ara[100], n,i;
 void getdata(){
FILE *fr;
 fr = fopen("in.txt", "r");
 fscanf(fr,"%d",&n);
 for(i=0 ; i<n ; i++){
  fscanf(fr,"%d",&ara[i]);
 }
 fclose(fr);
 }
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.o", "w", stdout);

  
 
 getdata();
 int r , m;
 scanf("%d",&r);


 FILE *fr;
 fr = fopen("out.txt", "w");

 fprintf(fr,"%d\n",n+1);
 for(i=0 ; i < n ;i++){
 
  fprintf(fr," %d\n", ara[i]);
  

 }
 fprintf(fr," %d\n", r);

 fclose(fr);

  
  return 0;
}