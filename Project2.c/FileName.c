#include <stdio.h>

int main(void) {
	int i;
	int sum;
	sum = 0;
	for (i = 2; i <= 100; i++)
		if (i % 3 == 0); return i;

		else if (i % 2 == 0); return i;

		else return 0;
			
		sum += i;

	printf("1���� 100���� �Ҽ��� ��=%d", sum);

	return 0;
}