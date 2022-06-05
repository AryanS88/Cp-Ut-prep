#include<Stdio.h>
int main()
{
    int i,j;
    char a[100],b[100];
    printf("Enter The strings\n");
    gets(a);
    while(a[i]!='\0')
    {
        i++;
    }
    printf("The length of the string is  %d",i);

    return 0;
}
