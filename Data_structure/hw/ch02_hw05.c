#include <stdio.h>

void hanoi_tower(int n, char from, char tmp, char to) {
	if (n == 1) printf("%c에서 원반 1를(을) %c로 옮김\n", from, to);
	else
	{
		hanoi_tower(n - 1, from, to, tmp);
		printf("%c에서 원판 %d를(을) %c로 옮김\n", from, n, to);
		hanoi_tower(n - 1, tmp, from, to);
	}
}

int main(void) {
	hanoi_tower(3, 'A', 'B', 'C');
	

	return 0;
}
