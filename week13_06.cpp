#include <stdio.h>

int add(int x, int y);
int sub(int x, int y);

int main(void) {
	int result;
	int(*pf)(int x, int y);

	pf = add;
	result = pf(10, 20);
	printf("10+20Àº %d\n", result);

	pf = sub;
	result = pf(10, 20);
	printf("10-20Àº %d\n", result);

	return 0;

}
int add(int x, int y){
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}