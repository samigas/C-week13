#include <stdio.h>

void menu(void);
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

void menu(void) {
	printf("=====================\n");
	printf("0. ����\n1. ����\n2. ����\n3. ������\n4. ����\n");
	printf("=====================\n");
}

int main(void) {
	int choice, result, x, y;
	int (*pf[4])(int x, int y) = { add, sub, mul, div };



	while (1) {
		menu();
		printf("�޴��� �����Ͻÿ�:");
		scanf_s("%d", &choice);

		if (choice < 0 || choice >= 4)
			break;
		printf("2���� ������ �Է��Ͻÿ�:");
		scanf_s("%d %d", &x, &y);

		result = (*pf[choice])(x, y);
		printf("���� ��� = %d\n", result);
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