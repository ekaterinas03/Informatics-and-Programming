#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main() {
	char* locale = setlocale(LC_ALL, ""); //установим локализацию символов в консоли
	double x1, x2, y1, y2, r1, r2, d = 0;
	const double t = 0.01;
	printf("Задайте параметры окружности №1 \n");
	if (scanf("%lf%lf%lf", &x1, &y1, &r1) != 3 || r1 <= 0) {
		printf("Неправильные параметры \n");
		return 1;
	}
	printf("Задайте параметры окружности №2 \n");
	if (scanf("%lf%lf%lf", &x2, &y2, &r2) != 3 || r2 <= 0) {
		printf("Неправильные параметры \n");
		return 1;
	}
	d = sqrt(x2 * x2 - 2 * x2 * x1 + x1 * x1 + y2 * y2 - 2 * y1 * y2 + y1 * y1);
	if (d > r1 + r2) {
		printf("Окаружности отделены ");
	}
	else if (abs(d - (r1 + r2)) <= t) {
		printf("Окружности соприкасаются ");
	}
	else if (d < r1 + r2) {
		if (d > r1 - r2) {
			printf("Окружности пересекаются ");
		}
		else
		{
			printf("Окружности внетри друг друга");
		}
	}
	system("PAUSE");
	return 0;
}