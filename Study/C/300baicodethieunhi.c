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
int main() {
    int a;
    scanf("%d", &a);
    int cv = a * 4;
    int dt = a * a;
    printf("%d %d", cv, dt);
    return 0;
}