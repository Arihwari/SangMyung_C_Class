#include <stdio.h>
int main(void)
{
	double kil_to_mile, kil;

	printf("Please enter kilometers: ");
	scanf("%lf", &kil);

	kil_to_mile = kil / 1.609;
	printf("%.1f km is equal to %.1f.", kil, kil_to_mile);
	return 0;
}