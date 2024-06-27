#include <stdio.h>
#include <stdlib.h>

int main()
{   char s[1000],d[1000];
  printf("enter string:");
  scanf("%s",&s);
 copy(s,d);
    printf("Copied String:%s",d);
    return 0;
}
 void copy(char *s,char *d)
 {
      while(*s !='\0')
  {
      *d=*s;
      s++;
      d++;
  }
 }
