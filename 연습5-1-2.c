#include <stdio.h>

int main(void) {
	double a, b;

	scanf("%lf %lf", &a, &b);

	printf("���� : %.1lf\n", a + b);
	printf("���� : %.1lf\n", a - b);
	printf("���� : %.1lf\n", a * b);
	printf("������ : %.1lf", a / b);

	return 0;
}