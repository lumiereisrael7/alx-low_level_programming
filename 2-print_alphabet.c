#include <stdio.h>

int main(void) {
	char c;
	for (c = 'a'; c < 'z' + 1; c++)
		putchar(c);
	putchar('\n');

	return 0;
}