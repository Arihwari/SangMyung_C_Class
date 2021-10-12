#include <stdio.h>
void returnfunc(int num)
{
	int a;
	a = num % 2;
	if (num > 1)
		returnfunc(num / 2);

	printf("%d", a);
	return;
}
int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	returnfunc(num);

	return 0;
}