#include <stdio.h>

int main(void) {

	int array[24][24][24];
	int count = 0;

	for (int i = 0; i <= 1; i++)
	{
		
		for (int j = 0; j <= 2; j++)
		{
			
			for (int k = 0; k <= 3; k++)
			{
				count++;
				printf("array[%d][%d][%d] = %d \n", i, j, k, count);
			
		}
	}




	return 0;
}