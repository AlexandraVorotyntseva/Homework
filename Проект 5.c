#include <stdio.h>

int stringExist(char string[], char s2[]);

int main(void) {
	char string[] = "";
	char s2[] = "";
	printf("Please, enter a string:\n");
	gets(string);
	printf("Please, enter a substring:\n");
	gets(s2);
	printf("Answer: %i\n", stringExist(string, s2));
	return 0;
}

int stringExist(char string[], char s2[]) {
	int count = 0;
	int size = 0;
	int i = 0;
	int temp = 0;
	int result = 0;

	while (s2[size]!= '\0') {
		size++;
	}
	while (string[i]!= '\0') {
		if (string[i] == s2[0]) {
			count = 0;
			while ((temp = (string[i] == s2[count]))!= 0) {
				count++;
				if (size == count) {
					result++;
					break;
				}
				i++;
			}
		}
		i++;
	}
	return result;
}