
#include <stdio.h>
#include <ctype.h>

int main()
{    char s[100];
    int c1=0,c2=0,c3=0;
    printf("enter a string :");
    scanf("%s",s);
    for( int i=0;s[i]!='\0';i++)
    {
        if(isalpha(s[i]))
            c1++;
            else if (isdigit(s[i]))
                c2++;
            else if (s[i]!=' '&&s[i]!='\n'&&s[i]!='\t') c3++;
    }
      printf("total number of alphabets:%d\ndigits:%d\nspecial character:%d",c1,c2,c3);
        return 0;
}
