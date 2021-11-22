#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double pow(double a, double b);
double sqrt(double x);
double stdv(double *starr, int len)
{
	int i;
	double average, st_sum = 0, sum = 0;
	for (i = 0; i < len; i++)
		sum += starr[i];

	average = sum / 5;

	for (i = 0; i < len; i++)
	{
			st_sum += pow((average - starr[i]),2);
	}

	return sqrt(st_sum / 5);
}
int main(void)
{
	double arr[5] = {0, 0, 0, 0, 0};

	printf("Enter 5 real numbers: ");
	scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	printf("Standard Deviation = %.3f", stdv(arr, sizeof(arr) / sizeof(double)));

	return 0;


}