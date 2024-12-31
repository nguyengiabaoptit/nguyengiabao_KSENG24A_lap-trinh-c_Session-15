#include <stdio.h>
#include <ctype.h>

void capWords(char str[]) {
    int i = 0;
    if (str[i] != '\0' && isalpha(str[i])) {
        str[i] = toupper(str[i]);
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            i++;
            if (str[i] != '\0' && isalpha(str[i])) {
                str[i] = toupper(str[i]);
            }
        }
        else {
            i++;
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    capWords(str);
    printf("Result: %s\n", str);
    return 0;
}

