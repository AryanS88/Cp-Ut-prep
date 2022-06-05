#include<stdio.h>

struct student
{
 char name[30];
 int roll_no;
 int math,phy,chem;
 int total;
};

int main()
{
  int i,j,n,temp;
  struct student st[100];
  printf("Enter The Number of students ");
  scanf("%d",&n);
  for(i=0;i<=n-1;i++)
  {
    printf("enter the name of the student :\n the roll number  : \nmarks in three subjects \n");
    scanf("%s%d%d%d%d",&st[i].name,&st[i].roll_no,&st[i].math,&st[i].phy,&st[i].chem);
    st[i].total=st[i].math+st[i].phy+st[i].chem;
  }

  for(i=0;i<=n-1;i++)
  {
    for(j=0;j<=n-2;j++)
    {
      if(st[j].total<st[j+1].total)
      {
        st[temp]=st[j];
        st[j]= st[j+1];
        st[j+1]= st[temp];
      }
    }
  }
  printf("Name\troll no\tmaths\tphysics\tchemistry\ttotal\n");
  printf("-------------------------------------------------\n");
  for(i=0;i<=n-1;i++)
  {
    printf("%s\t%d\t%d\t%d\t%d\t%d\n",st[i].name,st[i].roll_no,st[i].math,st[i].phy,st[i].chem,st[i].total);

  }
  return 0;
}
