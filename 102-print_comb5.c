#include <stdio.h>

int main(void) {
	int c, j, k, l;
	for (c = '0'; c <= '9'; c++) {
		for (j = c + 1; j <= '9'; j++) {	
			for (k = 0; k <= '9';k++) {	
				for (l = k ; l <= '9';l++) {	
					putchar(c);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (c != '9' || j != '8' || k != '9' || l != '9') {
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return 0;
}
