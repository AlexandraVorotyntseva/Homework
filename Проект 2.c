#include <stdio.h>

int main()
{
	int sum = 0;
	char bilet[6];
	for (int i = 0; i <= 999999; i++) {
		for (int k = i, int j = 0; j < 6; j++, k /= 10) {
			bilet[j] = k % 10;
		}
		if (bilet[0] + bilet[1] + bilet[2] == bilet[3] + bilet[4] + bilet[5]) {
			++sum;
		}
	}
	printf("%d\n", sum);
}