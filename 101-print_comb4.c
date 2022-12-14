#include <stdio.h>

int main(void) {
	int c, j, k;
	for (c = '0'; c <= '9'; c++) {
		for (j = c + 1; j <= '9'; j++) {	
			for (k = j + 1; k <= '9';k++) {	
				putchar(c);
				putchar(j);
				putchar(k);
				if (c != '7' || j != '8' || k != '9') {
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return 0;
}
