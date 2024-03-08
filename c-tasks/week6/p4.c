
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int i,found=0;
    printf("Enter a sting:");
    scanf("%s",str);
    printf("enter character to search:");
    scanf("  %c",&ch);

    for ( i = 0;str[i]!='\0';i++) {
        if(str[i]==ch)
        { printf("'%c' is found at index %d\n", ch,i);
          found=1;
            break;
        }
    }
    if(!found)
        printf("the character not found in the string");

    return 0;
}
