#include <stdio.h>
#include <math.h>
void main()
{
	float A1, A2, B1, B2, x, y, C1, C2;
	printf("Enter A1: ");
	scanf("%f", &A1);
	printf("Enter A2: ");
	scanf("%f", &A2);
	printf("Enter B1: ");
	scanf("%f", &B1);
	printf("Enter B2: ");
	scanf("%f", &B2);
	printf("Enter C1: ");
	scanf("%f", &C1);
	printf("Enter C2: ");
	scanf("%f", &C2);
	x = (C1 - B1 * ((C2 * A1 - C1 * A2) / (A1 * B2 - A2 * B1))) / A1;
	y = (C2 * A1 - C1 * A2) / (A1 * B2 - A2 * B1);
	printf("x = (C1 - B1 * ((C2 * A1 - C1 * A2) / (A1 * B2 - A2 * B1))) / A1 ==> ");
	printf("x = ");
	printf("%f\n", x);
	printf("y = (C2 * A1 - C1 * A2) / (A1 * B2 - A2 * B1) ==> ");
	printf("y = ");
	printf("%f\n", y);

}