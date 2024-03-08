#include <stdio.h>
#include <stdlib.h>

int main()
{    char s[100];
    int i;
    printf("enter a string of lower case:");
    scanf("%s",s);
    printf("the string in uppercase:");
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-32;
    }
      printf("%s\n",s);
        return 0;
}
