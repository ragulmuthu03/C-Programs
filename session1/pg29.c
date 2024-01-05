#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch >= 'A' && ch <= 'Z') {
            printf("The character entered is a capital letter.\n");
        } else {
            printf("The character entered is a small case letter.\n");
        }
    } else if (ch >= '0' && ch <= '9') {
        printf("The character entered is a digit.\n");
    } else {
        printf("The character entered is a special symbol.\n");
    }

    return 0;
}
