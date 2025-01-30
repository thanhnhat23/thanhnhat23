#include <stdio.h>
#include <math.h>
#define ll unsigned long long

// Python fibonacci binet
// #Cong thuc Binet
// def Fibonacci(n):
//     trung_gian = 5 ** 0.5
//     cong_thuc = (1 / trung_gian) * (((1 + trung_gian) / 2) ** n - ((1 - trung_gian) / 2) ** n)
//     return cong_thuc
// x = Fibonacci(n)
// print(int(x))
// Study by ThanhNhat =D

ll fibonacci(ll n) {
    double tg = pow(5, 0.5);
    double ct = (1 / tg) * (pow((1 + tg) / 2, n) - pow((1 - tg) / 2, n));
    return ct;  
}

int main() {
    ll n;
    scanf("%lld", &n);
    printf("%lld", fibonacci(n));
    return 0;
}