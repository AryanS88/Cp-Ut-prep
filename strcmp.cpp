#include<Stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[100],b[100];
    printf("Enter The strings\n");
    gets(a);
    gets(b);

    if(strcmp(a,b)==0)
    {
        printf("String are equal ");
    }

    else if(strcmp(a,b)>0)
    {
        printf("String a is greater");
    }

    else
    {
        printf("String b is greater");
    }

    return 0;
}
