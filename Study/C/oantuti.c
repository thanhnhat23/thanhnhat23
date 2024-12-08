#include <stdio.h>
int main() {
    char nam, doiThu;
    scanf(" %c %c", &nam, &doiThu);
    if (nam == doiThu) {
        printf("DRAW\n");
    } else if ((nam == 'B' && doiThu == 'K') || 
               (nam == 'K' && doiThu == 'G') || 
               (nam == 'G' && doiThu == 'B')) {
        printf("WIN\n");
    } else {
        printf("LOSE\n");
    }
    return 0;
}
