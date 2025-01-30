#include <stdio.h>
#include <string.h>
#include <ctype.h>

int doixung(char *a) {
    int len = strlen(a);
    for (int i = 0; i < len / 2; i++) {
        if (a[i] != a[len - 1 - i]) {
            return 0; // False
        }
    }
    return 1; // True
}

int main() {
    char a[100];
    scanf("%s", a);

    if (doixung(a)) { // If true
        printf("%s la so doi xung", a);
    } 
    else { 
        printf("%s la so khong doi xung", a);
    }
    return 0;
}
