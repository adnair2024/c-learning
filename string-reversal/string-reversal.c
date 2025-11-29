#include <string.h>
#include <stdio.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int len = strlen(s);
    printf("Reversed: ");
    for (int i = len - 1; i >= 0; i--)
        putchar(s[i]);
    putchar('\n');

    return 0;
}
