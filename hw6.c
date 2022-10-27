#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int arr[2][5] = { 0 };
	printf("Please input five integers: ");

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[0][i]);
		if (arr[0][i] % 2 == 0) arr[1][i] = 2; // 짝수일 경우 2 저장
	}

	printf("Odd numbers: ");

	for (int i = 0; i < 5; i++) {
		if (arr[1][i] == 0) printf("%d ", arr[0][i]);
	}

	printf("\nEven numbers: ");
	for (int i = 0; i < 5; i++) {
		if (arr[1][i] == 2) printf("%d ", arr[0][i]);
	}

	return 0;
}
