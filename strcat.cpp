#include<Stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[100],b[100];
    printf("Enter The strings\n");
    gets(a);
    gets(b);

    strcat(a,b);
    printf("The Concated String is %s",a);

    return 0;
}
