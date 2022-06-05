#include<stdio.h>
int main()
{
int n,ans;
int fact(int n);
 printf("Enter the number to perform factoiral\n ");
 scanf("%d",&n);
 printf("The factorial is %d", fact(n));

}

int fact(int n)
{
    int i;
    if (n==1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
        
    }
    // NOte to self  always use the same variable for declaration parameters and comparable number
}
