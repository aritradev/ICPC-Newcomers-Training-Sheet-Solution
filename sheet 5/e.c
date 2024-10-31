 #include <stdio.h>
 
void swap(int num1, int num2)
{   int temp;
temp= num1;
num1 = num2;
num2=temp;
    printf("%d %d\n", num1, num2);
}
 
 
int main()
{   
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    swap(n1, n2);
 
    return 0;
}