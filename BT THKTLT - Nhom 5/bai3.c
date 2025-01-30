#include <stdio.h>
#include <math.h>

double cal(double l, int month) {
    return pow(1 + l / 100, month);
}

int main() {
    // Hang ngang
    printf(" n");
    for (double l = 5; l <= 10; l++) {
        printf("%8.0lf%%  ", l);
    }
    printf("\n"); 
    // Hang doc
    for (int month = 1; month <= 10; month++) {
        printf("%2d ", month);
        for (double l = 5; l <= 10; l++) {
            double c = cal(l, month);
            printf("%8.5lf   ", c);
        }
        printf("\n");
    }
    return 0;
}