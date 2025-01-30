#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double y1, y2, x1, x2;
    int num = 0;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a == 0) {
        printf("Khong phai phuong trinh bac 4\n");
        return 1;
    }

    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("Phuong trinh vo nghiem.\n");
    } 
    else if (delta == 0) {
        y1 = -b / (2 * a);
        if (y1 >= 0) {
            x1 = sqrt(y1);
            x2 = -sqrt(y1);
            if (x1 == x2) {
                num = 1;
                printf("Nghiem: %.3lf\n", x1);
            } else {
                num = 2;
                printf("Nghiem 1: %.3lf\n", x1);
                printf("Nghiem 2: %.3lf\n", x2);
            }
        }
    } 
    else {
        y1 = (-b + sqrt(delta)) / (2 * a);
        y2 = (-b - sqrt(delta)) / (2 * a);
        if (y1 >= 0) {
            x1 = sqrt(y1);
            x2 = -sqrt(y1);
            num += (x1 == x2) ? 1 : 2;
            printf("Nghiem 1: %.3lf\n", x1);
            if (x1 != x2) {
                printf("Nghiem 2: %.3lf\n", x2);
            }
        }
        if (y2 >= 0) {
            x1 = sqrt(y2);
            x2 = -sqrt(y2);
            num += (x1 == x2) ? 1 : 2;
            printf("Nghiem 3: %.3lf\n", x1);
            if (x1 != x2) {
                printf("Nghiem 4: %.3lf\n", x2);
            }
        }
    }
    printf("So nghiem khac nhau: %d\n", num);
    return 0;
}
