#include <stdio.h>

int main(void) {

	int num ,result;

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &num);

	result = fact(num);
	printf("\n\n %d�� ���丮�� ���� %ld�Դϴ�.\n", num, result);
	getchar(); getchar();


	return 0;
}

long int fact(int num) {
	int val;
	if (num <= 1) {
		printf("\n fact(1) �Լ� ȣ��!");
		printf("\n fact(1) �� 1 ��ȯ!!");
		return 1;
	}
	else {
		printf("\n fact(%d) �Լ� ȣ��!", num);
		val = (num * fact(num - 1));
		printf("\n fact(%d) �� %ld ��ȯ!!", num, val);
		return val;
	}
}
