#include<stdio.h>
#include<string.h>
void main()
{
 int i;
 char a[100],b[100];
 printf("Enter a String");
 gets(a);
 strcpy(b,a);

 printf("%s",b);

}