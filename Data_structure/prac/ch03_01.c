#include <time.h>
#include <stdio.h>

int main(void) {

	int i;
	double start, end;

	start = (double)clock() / CLOCKS_PER_SEC;

	int sum = 0;
	for (int i = 0; i < 100000000; i++)
	{
		sum++;
	}

	end = (((double)clock()) / CLOCKS_PER_SEC);
	printf("프로그램 수행시간: %lf\n", (end - start));
	return 0;
}
