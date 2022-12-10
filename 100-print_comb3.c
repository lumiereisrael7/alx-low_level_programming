#include <stdio.h>

int main(void) {
	int c, j;
	for (c = '0'; c <= '9'; c++) {
		for (j = c + 1; j <= '9'; j++) {	
			putchar(c);
			putchar(j);
			if (c != '8' || j != '9') {
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return 0;
}
