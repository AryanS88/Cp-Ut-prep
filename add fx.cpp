#include<stdio.h>
int main()
{
 int n1,n2,sum;
 int add(int a,int b);
	 printf("Enter two numbers to perform addition\n ");
	 scanf("%d%d",&n1 ,&n2);
 sum=add(n1,n2);
 printf(" The Sum is %d",sum);
   
}

int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}  	
