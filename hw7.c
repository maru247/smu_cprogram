#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int arr1[6] = { 1, 2, 3, 4, 5 ,6 };
	int arr2[6] = { 7, 8, 9, 10 ,11 ,12 };

	printf("arr1: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\narr2: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}

	int* str1 = arr1 + 1, *str2 = arr2+1;
	int temp = 0;

	for (int i = 0; i < 6; i++) {
		str1 = arr1 + i;
		str2 = arr2 + i;

		temp = *str2;
		arr2[i] = *str1;
		arr1[i] = temp;
	}
	printf("\n\nafter swap\n");

	printf("arr1: ");

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\narr2: ");

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}

}