#include <stdio.h>

int main() {
	double arr[3];
	for (int i = 0; i < 3; i++) {
		scanf("%lf", &arr[i]);
	}
	for (int i = 0; i < 3; i++) {
		if (arr[i] > 3 && arr[i] < 5) {
			printf("%lf ", arr[i]);
		}
	}
}
