#include<stdio.h>
int main()
{

    int n,r,ncr;
    int fact (int no);
    printf("Enter The Values of n and r");
    scanf("%d%d",&n,&r);
    ncr=fact(n)/fact(r)*fact(n-r);
    printf("NCR=%d",ncr);

}
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return(n*fact(n-1));
}
