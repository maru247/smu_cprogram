#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct city {
	char name[20];
	char country[20];
	int population;
} City;

void showcity(City input) {
	printf("%s in %s with a population of %d people\n", input.name, input.country, input.population);
}


int main() {
	printf("Input three cities:\n");
	City arr[3] = { 0 };
	for (int i = 0; i < 3; i++) {
		printf("Name> "); gets(arr[i].name);
		printf("Country> "); gets(arr[i].country);
		//scanf("%s", arr[i].country);
		printf("Population > "); scanf("%d", &arr[i].population);
		getchar();
	}

	for (int i = 0; i < 3; i++) {
		showcity(arr[i]);
	}
}