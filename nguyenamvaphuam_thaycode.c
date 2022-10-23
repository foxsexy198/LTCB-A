#include <stdio.h>
int main() {
    char x;
    scanf("%c", &x);
    switch (x) {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'o': case 'O':
        case 'u': case 'U':
        case 'i': case 'I':
            printf("%c is a vowel.\n", x);
            break;
        default:
            printf("%c is a consonant.\n", x);
            break;
        }
    return 0;
}
