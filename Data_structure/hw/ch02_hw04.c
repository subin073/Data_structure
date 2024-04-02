#include <stdio.h>

int main(void) {

	int num ,result;

	printf("정수를 입력하세요: ");
	scanf_s("%d", &num);

	result = fact(num);
	printf("\n\n %d의 팩토리얼 값은 %ld입니다.\n", num, result);
	getchar(); getchar();


	return 0;
}

long int fact(int num) {
	int val;
	if (num <= 1) {
		printf("\n fact(1) 함수 호출!");
		printf("\n fact(1) 값 1 반환!!");
		return 1;
	}
	else {
		printf("\n fact(%d) 함수 호출!", num);
		val = (num * fact(num - 1));
		printf("\n fact(%d) 값 %ld 반환!!", num, val);
		return val;
	}
}
