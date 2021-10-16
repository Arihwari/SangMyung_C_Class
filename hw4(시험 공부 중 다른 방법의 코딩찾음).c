#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void BinaryMaker(int n)
{
	if (n != 0)
	{
		BinaryMaker(n / 2);
		printf("%d", n % 2);
	}

	return;
}
int main(void)
{
	int num;
	printf("Please enter a number:");
	scanf("%d", &num);

	BinaryMaker(num);
	return 0;
}