#include <stdio.h>

int main() {
	int n = 64, i;
	double result, x;
	scanf("%lf", &x);
	for (i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			result = 1.0 / (x - i);
		}
		else {
			result = result * (x - i);
		}
	}
	printf("%lf", result);
	return 0;
}