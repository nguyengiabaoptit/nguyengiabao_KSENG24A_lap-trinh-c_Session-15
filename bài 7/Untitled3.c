#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    int letters = 0, digits = 0, special = 0;
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int i; 
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters++;
        } else if (isdigit(str[i])) {
            digits++;
        } else {
            special++;
        }
    }
    printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n", digits);
    printf("So ky tu dac biet: %d\n", special);

    return 0;
}
