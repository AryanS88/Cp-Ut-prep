#include<stdio.h>


int fibo(int n)
{
	int i;int c;
    int a=0;int b=1;
    printf("%d\t%d\t",a,b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
   
}

int main()
{
  int n;
  printf("Enter the number whose factorial is required :\n");
  scanf("%d",&n);
  fibo(n);
    
}
