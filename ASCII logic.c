#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("Converted character: %c\n", ch - 32);
    }
    else if (ch >= 'A' && ch <= 'Z') {

        printf("Converted character: %c\n", ch + 32);
    }
    else {
        printf("Not an alphabet character.\n");
    }

    return 0;
}

