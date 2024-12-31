#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, j = 0;
    strcpy(str, "hello world");
    printf("Chuoi ban dau la: %s\n", str);
    printf("moi nhap ki tu can xoa: ");
    scanf("%c", &ch);
    for(i = 0; i < strlen(str); i++) {
        if(str[i] != ch) {
            str[j++] = str[i];  
        }
    }
    str[j] = '\0';  
    printf("Chuoi sau khi xoa ki tu la '%c': %s\n", ch, str);

    return 0;
}

