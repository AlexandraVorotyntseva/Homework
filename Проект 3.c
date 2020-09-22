#include <stdio.h>
#include <string.h>

int main()
{
	char str[10000];
	printf("Enter a string of brackets: ");
	scanf("%s", &str);
	
	int open = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == '(')
		{
			open++;
		}
		else
		{
			if (open == 0) {
				printf("Brackets are not ballanced ");
				return 0;
			}
			else {
				open--;
			}
		}
	}
	if (open == 0) {
		printf("Brackets are ballanced ");
	}
	else {
		printf("Brackets are not ballanced ");
	}
	return 0;
}