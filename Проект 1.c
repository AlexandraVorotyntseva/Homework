#include <stdio.h>
#include <stdlib.h>

int delenie(int A, int B)
{
	int C = 0;
	while (A >= B) {
		C = C + 1;
		A = A - B;
	}
}

int main()
{
	int dividend = 0;
	int divider = 0;

	printf("Please, enter a dividend:\n");
	scanf("%d", &dividend);
	printf("Please, enter a divider:\n");
	scanf("%d", &divider);

	if (divider == 0) {
		printf("Error\n");
		return 0;
	}
	int Quotient = delenie(dividend, divider);
	if ((dividend) <= 0 && (divider) > 0) {
		Quotient = (-1) * Quotient - 1;
	}
	else if ((dividend) >= 0 && (divider) < 0) {
		Quotient = (-1) * Quotient + 1;
	}
	else if ((dividend) <= 0 && (divider) < 0) {
		Quotient = Quotient + 1;
	}
	printf("Quotient: %d", Quotient);
	return 0;
}
