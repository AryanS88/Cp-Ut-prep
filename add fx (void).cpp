#include<stdio.h>
int main()
{
 int n1,n2,sum;
 int add(int a,int b);
 printf("Enter two numbers to perform addition ");
 scanf("%d%d",&n1,&n2);
 sum=add(n1,n2); 
}

void add(int a,int b)
{
    int c;
    c=a+b;
     printf("%d",c);;
}
