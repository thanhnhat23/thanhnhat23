#include <stdio.h>
int main() {
    int number;
    int oddCount = 0;
    while (1) {
        scanf("%d", &number);
        if (number == 0) {
            break;
        }
        if (number % 2 != 0 && number < 1000000) {
            oddCount++;
        }
    }
    printf("%d\n", oddCount);
    return 0;
}