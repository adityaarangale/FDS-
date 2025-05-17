#include <stdio.h>

int main() {
	int num, stack[32], top = -1;

	printf("Enter a decimal number: ");
	scanf("%d", &num);

	if (num == 0) {
		printf("Binary: 0\n");
		return 0;
	}

	while (num > 0) {
		stack[++top] = num % 2;
		num /= 2;
	}

	printf("Binary: ");
	while (top >= 0) {
		printf("%d", stack[top--]);
	}
	printf("\n");

	return 0;
}
