#include<stdio.h>

struct student
{
 char name[30];
 int roll_no;
 int math,phy,chem;
};

int main()
{
  int i,j,n;
  struct student st[100];
  printf("Enter The Number of students ");
  scanf("%d",&n);
  for(i=0;i<=n-1;i++)
  {
    printf("enter the name of the student :\n the roll number  : \nmarks in three subjects \n");
    scanf("%s%d%d%d%d",&st[i].name,&st[i].roll_no,&st[i].math,&st[i].phy,&st[i].chem);

  }
  printf("Name\troll no\tmaths\tphysics\tchemistry\t\n");
  printf("-------------------------------------------------\n");
  for(i=0;i<=n-1;i++)
  {
    printf("%s\t%d\t%d\t%d\t%d\t\n",st[i].name,st[i].roll_no,st[i].math,st[i].phy,st[i].chem);

  }
  return 0;
}
