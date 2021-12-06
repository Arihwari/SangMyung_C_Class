#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void clearBuffer(void) {
	while (getchar() != '\n');
}
typedef struct city
{
	char name[20];
	char country[20];
	int population;
}City;
int main(void)
{
	struct city arr[3];
	int i;
	printf("Input three cities:\n");
	for (i = 0; i < 3; i++)
	{

		fputs("Name> ", stdout);
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		fputs("County> ", stdout);
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		fputs("Population> ", stdout);
		scanf("%d", &arr[i].population);
		clearBuffer();
	}

	printf("Printing the three cities:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s\b in %s\b with a population of %d people\n", i+1, arr[i].name, arr[i].country, arr[i].population);
	}

	return 0;

}