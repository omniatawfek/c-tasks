#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reverse[100];
    int length, i, j;
    printf("Enter a sting:");
    scanf("%s",str);
    length = strlen(str);
    j = 0;
    for (i = length - 1; i >= 0; i--) {
        reverse[j++] = str[i];
    }
    reverse[j] = '\0';
    printf("Reverse of the string: %s\n", reverse);

    return 0;
}
