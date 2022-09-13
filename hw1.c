#include <stdio.h>

int main(void) {
	int a, b;
	printf("Input two integers: ");
	scanf_s("%d %d", &a, &b);
	int c = a & b;
	int d = a | b;
	int e = a ^ b;
	printf("%d & %d = %d\n", a, b, c);
	printf("%d | %d = %d\n", a, b, d);
	printf("%d ^ %d = %d", a, b, e);
	return 0;

}