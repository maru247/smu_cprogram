#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char str[50];
	gets(str);

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			printf("%c", str[i] + 32);
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			printf("%c", str[i] - 32);
		}
		else
			printf("%c", str[i]);


	}

}