#include <stdio.h>

void menu(void);
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

void menu(void) {
	printf("=====================\n");
	printf("0. µ¡¼À\n1. »¬¼À\n2. °ö¼À\n3. ³ª´°¼À\n4. Á¾·á\n");
	printf("=====================\n");
}

int main(void) {
	int choice, result, x, y;
	int (*pf[4])(int x, int y) = { add, sub, mul, div };



	while (1) {
		menu();
		printf("¸Þ´º¸¦ ¼±ÅÃÇÏ½Ã¿À:");
		scanf_s("%d", &choice);

		if (choice < 0 || choice >= 4)
			break;
		printf("2°³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À:");
		scanf_s("%d %d", &x, &y);

		result = (*pf[choice])(x, y);
		printf("¿¬»ê °á°ú = %d\n", result);
	}
	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}