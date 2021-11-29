#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[128];
	char diff = 'a' - 'A';
	int i = 0;

	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	
	
	for (i = 0; i < (int)strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += diff;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= diff;
	}
	
	printf("Output> ");
	printf("%s", str);

	return 0;

}