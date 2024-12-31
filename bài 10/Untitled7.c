#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "bcdac";  
    int length = strlen(str);  
    char characters[256];  
    int count[256] = {0};  
    int i; 
    for (i = 0; i < length; i++) {
        int found = 0;
        int j; 
        for (j = 0; j < i; j++) {
            if (str[i] == characters[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            characters[i] = str[i];
            int j; 
            for (j = 0; j < length; j++) {
                if (str[j] == characters[i]) {
                    count[i]++;
                }
            }
        }
    }
    for (i = 0; i < length; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", characters[i], count[i]);
        }
    }
    
    return 0;
}

