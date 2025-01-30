#include <stdio.h>

int main () {
	int n = 10;
    for (int i = 1; i <= n; i++) { // 3 -> 10 
		// Tao khoang trang
    	for (int j = 1; j <= n - i; j++) { // 1 -> 7
    		printf (" ");
		}
		// Tao tam giac
    	for (int j = i; j < i + i; j++) { // 2 -> 4 - 1
    		printf ("%d", j % 10); 
		}
		// Tao tam giac
    	for (int j = i + i - 2; j >= i; j--) { // 2 -> 2
    		printf ("%d", j % 10);
		}
		printf ("\n");	
	}
	return 0 ;
}