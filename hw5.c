#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int second(int);

int main() {
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	second(num);

	return 0;
}

int second(int num) {
	if (num >= 2) {
		second(num / 2);
	}
	printf("%d", num % 2);
}

