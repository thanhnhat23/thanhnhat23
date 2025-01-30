#include <stdio.h>
#include <conio.h>
#include <math.h>
void bai1(a,b) {
    int x = 0;
    x = a;
    a = b;
    b = x;
    printf("a = %d\nb = %d", a, b);
}
void bai2(a,b) {
    printf("%d&%d = %d",a,b,a&b);
    printf("\n%d|%d = %d",a,b,a|b);
    printf("\n~%d = %d",a,~a);
    printf("\n%d>>3 = %d",a,a>>3);
    printf("\n%d<<5 = %d",b,b<<5);
}
void bai3(a,b,c) {
    a=0x5a; b=072; c=100;
    printf("c = %x",c);
    printf("\n%d&%d = %d", a, b, a&b);
    printf("\n%d|%d = %d", a, b, a|b);
    printf("\n%d^%d = %d", a, b, a^b);
    printf("\n!(%d&%d) = %d", a, b, !(a&b));
    printf("\n~%d = %d", a, ~a);
    printf("\n~(%d&%d) = %d", a, b, ~(a&b));
    printf("\n%d>>3 = %d", a, a>>3);
    printf("\n%d<<5 = %d", b, b<<5);  
}
void bai4(r) {
    float pi = 3.14, s = 0, v = 0;
    s = 4*pi*pow(r,2);
    printf("Dien tich mat cau: %.2f", s);
    v = (4*pi*pow(r,3))/3;
    printf("\nThe tich mat cau: %.2f", v);
}
void bai5(l) {
    float pi = 3.14, T = 0;
    T = 2*pi*sqrt(l/9.8);
    printf("Chu ky dao dong cua con lac la: %.2f", T);
}
void bai6(a,b,c) {
    double val = 0, pi = 3.14;
    val = 180 / pi;
    printf("Goc cua 3 canh tam giac la: ");
    printf("\na = %.2f",b,c,acos(b/c)*val);
    printf("\nb = %.2f",a,c,acos(a/c)*val);
    printf("\nc = %.2f",a,b,acos(b/a)*val);
}
void bai23(a) {
    int s = 0, d = 0;
    while (a > 0) {
       s += a%10;
       a = a / 10;
       d++;
    }
    printf("%d",s);
    printf("\n%d",d);
}
void bai27 (n) {
    float s = 0;
    for (int i = 1; i <= 2*n - 1; i++) {
        if ( i%2 == 0 ) continue;
        s += 1.0/i;
    }
    printf("%f",s);
}
void giaithua (int n) {
    unsigned long long s = 1;
    for (int i = 1; i <= n; i++) {
        s *= i;
    }
    printf("%llu", s);
}
void luythua (int x, int n) {
    int kq = 1;
    for (int i = 0; i < n; i++) {
    	kq *= x;
    }
    printf("%d",kq);
}
int main() {
    int x, n;
    // Nhập giá trị của x và n cho lũy thừa
    printf("Nhap x va mu n:\n");
    scanf("%d%d", &x, &n);
    // Gọi hàm tính lũy thừa
    luythua(x, n);
    // Nhập giá trị của n cho giai thừa
    printf("\nNhap n de tinh giai thua:\n");
    scanf("%d", &n);
    // Gọi hàm tính giai thừa
    giaithua(n);
    return 0;
}
