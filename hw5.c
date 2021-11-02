#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void hole(int num[])
{
	int i=0;
	printf("\n홀수 출력: ");
	for (; i < 5; i++)
	{
		if (num[i] % 2 == 1)
			printf("%d ", num[i]);
	}

	return;
}
void jjack(int num[])
{
	int j=0;
	printf("\n짝수 출력: ");
	for (; j < 5; j++)
	{
		if (num[j] % 2 == 0)
			printf("%d ", num[j]);
	}

	return;
}
int main(void)
{
	int arr[5], i, j;

	printf("5개의 정수를 입력하세요: ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	
	hole(arr);
	jjack(arr);
	
	return 0;
	
}