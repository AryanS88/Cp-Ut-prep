#include<stdio.h>
int main()
{
    int i,j,n,temp;
    char a[100],b[100];
    printf("Enter A string\n");
    gets(a);
    while(a[n]!='\0')
    {
        n++;
    }
    for(i=0;i<=(n-1);i++)
    {
      b[n-i-1]=a[i];
    }
     for(i=0;i<=(n-1);i++)
    {
      if(a[i]!=b[i])
      {
	   break;
	  }   
    }
    if(i==n)
    {
      printf("The str is palindrome");   
    }
    else
    {
        printf("The str is not pal");
    }
   ;
return 0;
}
