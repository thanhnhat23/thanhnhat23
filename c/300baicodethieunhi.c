#include <stdio.h>
#include <stdlib.h>

// TwoSum
// int* twoSum(int* nums, int n, int target, int* returnSize) {
//     int* seen = (int*)malloc(10000 * sizeof(int));
//     for (int i = 0; i < 10000; i++) {
//         seen[i] = -1;
//     }
//     for (int i = 0; i < n; i++) {
//         int diff = target - nums[i];
//         if (diff >= 0 && seen[diff] != -1) {
//             int* result = (int*)malloc(2 * sizeof(int));
//             result[0] = seen[diff];
//             result[1] = i;
//             *returnSize = 2;
//             free(seen);
//             return result;
//         }
//         seen[nums[i]] = i;
//     }
//     *returnSize = 0;
//     free(seen);
//     return NULL;
// }

// int main() {
//     int n, target;
//     scanf("%d", &n);
//     int* nums = (int*)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &nums[i]);
//     }
//     scanf("%d", &target);
//     int returnSize;
//     int* result = twoSum(nums, n, target, &returnSize);
//     if (returnSize == 2) {
//         printf("[%d, %d]\n", result[0], result[1]);
//         free(result);
//     }
//     free(nums);
//     return 0;
// }

// 300 bai code thieu nhi
// 1. Tinh chu vi va dien tich hinh vuong
// int main() {
//     int a;
//     scanf("%d", &a);
//     int cv = a * 4;
//     int dt = a * a;
//     printf("%d %d", cv, dt);
//     return 0;
// }
// 2. Chu vi va dien tich hinh tron
// int main() {
//     double  r;
//     scanf("%lf", &r);
//     double cv = 2 * 3.14 * r;
//     double dt = 3.14 * r * r;
//     printf("%.2lf %.2lf", cv, dt);
//     return 0;
// }
// 3. Chu vi va dien tich hinh chu nhat
// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int cv = (a + b) * 2;
//     int dt = a * b;
//     printf("%d %d", cv, dt);
//     return 0;
// }
// 4. Tong va tich so nguyen a b
// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int tong = a + b;
//     int tich = a * b;
//     printf("%d %d", tong, tich);
//     return 0;
// }
// 5. So trung binh cong so nguyen a b c
// int main() {
//     double a, b, c;
//     scanf("%lf %lf %lf", &a, &b, &c);
//     double s = (a + b + c) / 3;
//     printf("%.1lf", s);
//     return 0;
// }
// 6. Chu vi va dien tich tam giac
// int main() {
//     double a,b,c;
//     scanf("%lf %lf %lf", &a, &b, &c);
//     double cv = a + b + c;
//     double p = cv / 2;
//     double dt = sqrt(p * (p - a) * (p - b) * (p - c));
//     printf("%.1lf %.3lf", cv, dt);
//     return 0;
// }
// 7. Dien tich tam giac
// int main() {
//     double a,h;
//     scanf("%lf %lf", &a, &h);
//     double s = a * h / 2;
//     printf("%.2lf", s);
//     return 0;
// }

// Global and block 
// void f() {
//     int a;
//     int a = 5, b = 10;
//     printf("%d %d", a, b);
// }
// int main() {
//     int a = 2, b = 4;
//     printf("%d %d", a, b); // a = 2, b = 4
//     f(); // a = 5, b = 10
//     printf("%d %d", a, b); // a = 2, b = 10
//     return 0;
// }

// Tich vo huong 
// void vecto(int n, int a[], int b[]) {
//     int s = 0;
//     for (int i = 0; i < n; i++) {
//        s += a[i] * b[i];
//     }
//     printf("%d", s);
// }
// int main() {
//     int n;
//     int a[100], b[100];
//     printf("Do rong mang: ");
//     scanf("%d", &n);
//     printf("\nPhan tu mang A: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
//     printf("\nPhan tu mang B: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &b[i]);
//     }
//     vecto(n, a, b);
//     return 0;
// }
// CT tich vo huong: a.b = a1b1 + a2b2 + a3b3

// 35
// int main() {
//     int n;
//     scanf("%d", &n);
//     double a[100];
//     for (int i = 0; i < n; i++) {
//         scanf("%lf", &a[i]); 
//     }
//     double x,y;
//     printf("Nhap khoang: ");
//     scanf("%lf %lf", &x, &y);
//     printf("\nKhoang [%lf, %lf]: ", x, y);
//     for (int i = 0; i < n; i++) {
//         if ( a[i] >= x && a[i] <= y ) {
//             printf("%.1lf ", a[i]);
//         }
//     };
//     return 0;          
// }