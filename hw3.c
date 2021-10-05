#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int ip_num;

	printf("Please enter a number: ");
	scanf("%d", &ip_num);
	if (ip_num % 2 == 0)
		printf("It is not a prime number");
	else
		printf("It is a prime number");

	return 0;

}