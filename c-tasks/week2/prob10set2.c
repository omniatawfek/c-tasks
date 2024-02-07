#include <stdio.h>
#include <stdlib.h>

int main()
{   int id =1234,pass=1111;
  printf("enter your id:");
  scanf("%d",&id);
  if(id==1234)
  {

    int c =3;
    do
    {
        printf("enter your password:");
        scanf("%d",&pass);
    if(pass==1111)
    {
        printf("welcome");
        break;
    }
    else
        printf("you are not registered\n");
        c-- ;
    }while(c!=0);
    if(c==0)
        printf("no more tries");
  }
    return 0;
}
