#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int ip_num, i;

	printf("Please enter a number: ");
	scanf("%d", &ip_num);
	
	for (i = 2; i < ip_num; i++)
	{
		if (ip_num % i == 0 && i != ip_num)
			break;
	}
	if (ip_num == 1 || ip_num==i)
		printf("It is a prime number.");
	else if(i != ip_num)
		printf("It is not a prime number.");

	return 0;
}