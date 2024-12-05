#include <stdio.h>

int main(void) {
	int a = 10, b = 20, c = 30, d = 40, e = 50;
	int* pa[5] = { &a, &b, &c, &d, &e };

	char fruits[4][10] = {
		"apple",
		"blueberry",
		"orange",
		"melon"
	};

	char* fruits[] = {
		"apple",
		"blueberry",
		"orange",
		"melon"
	};

	return 0;
}