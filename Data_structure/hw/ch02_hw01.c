#include <stdio.h>

int main(void) {

	char* ptr1[4] = {
		{"Korea\n"},{"Seoul\n"},{"Mapo\n"},{"152번지2/3\n"}
	};

	char* ptr2[4] = {
		{"Korea\n"},{"Seoul\n"},{"Jongno\n"},{"152번지2/3\n"}
	};

	for (int i = 0; i < 4; i++)
	{
		printf("%s", ptr1[i]);
	}

	printf("\n \n \n");

	for (int i = 0; i < 4; i++)
	{
		printf("%s", ptr2[i]);
	}

	return 0;
}