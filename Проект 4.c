#include <stdio.h>

int main()
{
	int A, B, N;

	printf("Please, enter a number:\n");
	scanf("%d, &B");
	printf("Answer:\n");
	
	for (int A = 1; A <= B; A++) {
		N = 0;
		for (int i = 2; i <= A / 2; i++) {
			if (A % i == 0) {
				N = 1; break;
			}
		}
		if (N == 0) {
			printf("%d\n", A);
		}
	}
	return 0;
}